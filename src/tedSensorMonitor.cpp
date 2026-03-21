
#include "tedSensorMonitor.hpp"

#include <phosphor-logging/lg2.hpp>

// see phosphor-logging/lib/include/phosphor-logging/lg2.hpp
PHOSPHOR_LOG2_USING_WITH_FLAGS;

using DBusProperty = std::string;
using DBusValue =
    std::variant<std::string, bool, std::vector<uint8_t>,
                 std::vector<std::string>,
                 std::vector<std::tuple<std::string, std::string, std::string>>,
                 std::tuple<std::vector<uint8_t>, std::vector<uint8_t>>>;
using DBusInterface = std::string;
using DBusPropertyMap = std::map<DBusProperty, DBusValue>;
using DBusInterfaceMap = std::map<DBusInterface, DBusPropertyMap>;

static constexpr auto serviceName = "xyz.openbmc_project.TedSensor";

// systemctl status phosphor-ted-sensor-monitor.service
// journalctl | grep -i ted-sensor-monitor
void TedSensorMonitor::initMatches()
{
    nameOwnerChangedMatch = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn),
        sdbusplus::bus::match::rules::nameOwnerChanged(),
        [this](sdbusplus::message_t& m) {
            auto [name, oldOwner,
                  newOwner] = m.unpack<std::string, std::string, std::string>();

            if (name.starts_with(':'))
            {
                // we should do nothing with unique-name connections
                return;
            }

            if (name.contains("xyz.openbmc_project.TedSensor"))
            {}
        });

    const std::string interfaceMatchString =
        sdbusplus::bus::match::rules::interfacesAdded() +
        sdbusplus::bus::match::rules::sender(serviceName);

    interfacesAddedMatch = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn), interfaceMatchString,
        [](sdbusplus::message_t& m) {
            sdbusplus::message::object_path objPath;
            DBusInterfaceMap interfaces;
            try
            {
                m.read(objPath, interfaces);
            }
            catch (const std::exception& e)
            {
                lg2::error("Failed to read object path");
                return;
            }
            lg2::info("Object path {OBJPATH} added with interfaces", "OBJPATH",
                      objPath.str);

            for (auto& [iface, props] : interfaces)
            {
                for (auto& [prop, value] : props)
                {
                    lg2::info("interface: {IFACE}, property: {PROP}", "IFACE",
                              iface, "PROP", prop);
                }
            }
        });

    interfacesRemovedMatch = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn), interfaceMatchString,
        [this](sdbusplus::message_t& m) {
            sdbusplus::message::object_path objPath;
            std::vector<std::string> interfaces;
            try
            {
                m.read(objPath, interfaces);
            }
            catch (const std::exception& e)
            {
                lg2::error("Failed to read object path");
                return;
            }

            for (auto& iface : interfaces)
            {
                lg2::info("Interface {IFACE} removed", "IFACE", iface);
            }
        });

    // const std::string propertyChangedMatchString =
    //     sdbusplus::bus::match::rules::propertiesChanged(_path, _interface) +
    //     sdbusplus::bus::match::rules::sender("xyz.openbmc_project.TedSensor");

    // propertyChangedMatch = std::make_unique<sdbusplus::bus::match_t>(
    //     static_cast<sdbusplus::bus_t&>(*conn),
    //     sdbusplus::bus::match::rules::propertiesChanged(_path, _interface),
    //     [this](sdbusplus::message_t&) {});
}
