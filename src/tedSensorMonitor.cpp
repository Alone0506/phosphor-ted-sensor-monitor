
#include "tedSensorMonitor.hpp"

#include <phosphor-logging/lg2.hpp>

// see phosphor-logging/lib/include/phosphor-logging/lg2.hpp
PHOSPHOR_LOG2_USING_WITH_FLAGS;

static constexpr auto serviceName = "xyz.openbmc_project.TedSensor";

// systemctl status phosphor-ted-sensor-monitor.service
// journalctl | grep -i ted-sensor-monitor
// busctl tree xyz.openbmc_project.TedSensor
void TedSensorMonitor::initMatches()
{
    // conn->async_method_call(
    //     [this](boost::system::error_code& ec,
    //            const DBusObjectMap& resp) mutable {
    //         if (ec)
    //         {
    //             lg2::error(
    //                 "Failed to call GetManagedObjects on {SERVICE}: {ERR}",
    //                 "SERVICE", serviceName, "ERR", ec.message());
    //             return;
    //         }

    //         for (const auto& [path, interfaces] : resp)
    //         {
    //             const auto& objPath = path.str;
    //             if (!this->sensors.contains(objPath))
    //             {
    //                 auto sensorPtr = std::make_shared<Sensor>(
    //                     this->conn, this->objServer, objPath, interfaces);
    //                 this->sensors.emplace(objPath, sensorPtr);
    //             }
    //         }
    //     },
    //     serviceName, "/xyz/openbmc_project/sensors",
    //     "org.freedesktop.DBus.ObjectManager", "GetManagedObjects");

    const std::string interfaceMatchString =
        sdbusplus::bus::match::rules::interfacesAdded() +
        sdbusplus::bus::match::rules::sender(serviceName);

    interfacesAddedMatch = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn), interfaceMatchString,
        [this](sdbusplus::message_t& m) {
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

            if (!this->sensors.contains(objPath.str))
            {
                auto sensorPtr = std::make_shared<Sensor>(
                    this->conn, this->objServer, objPath.str, interfaces);
                this->sensors.emplace(objPath.str, sensorPtr);
            }
            else
            {
                this->sensors.at(objPath.str)->addInterfaces(interfaces);
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

            if (!this->sensors.contains(objPath.str))
            {
                lg2::error(
                    "Received InterfacesRemoved for unknown object path {OBJPATH}",
                    "OBJPATH", objPath.str);
                return;
            }
            this->sensors.at(objPath.str)->removeInterfaces(interfaces);
        });
}
