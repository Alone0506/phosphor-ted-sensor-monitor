
#include "tedSensorMonitor.hpp"

#include <phosphor-logging/lg2.hpp>

#include <iostream>

// see phosphor-logging/lib/include/phosphor-logging/lg2.hpp
PHOSPHOR_LOG2_USING_WITH_FLAGS;

using DBusObjectPath = sdbusplus::object_path;
using DBusObjectMap = std::map<DBusObjectPath, DBusInterfaceMap>;

// systemctl status phosphor-ted-sensor-monitor.service
// journalctl | grep -i ted-sensor-monitor
// busctl tree xyz.openbmc_project.TedSensor
// busctl tree xyz.openbmc_project.TedSensorMonitor
// busctl call xyz.openbmc_project.TedSensor /xyz/openbmc_project/sensors
// org.freedesktop.DBus.ObjectManager GetManagedObjects
void TedSensorMonitor::initial()
{
    // initial interfaceAdded and interfaceRemoved matches
    registerMatch();

    conn->async_method_call(
        [this](const boost::system::error_code ec, DBusObjectMap objects) {
            if (ec)
            {
                lg2::error("Failed to get managed objects: {ERROR}", "ERROR",
                           ec.message());
                return;
            }
            std::cout << "Initial object paths with interfaces:" << std::endl;
            for (const auto& [objPath, interfaces] : objects)
            {
                std::cout << "Object path: " << objPath.str << std::endl;
                if (!this->sensors.contains(objPath.str))
                {
                    std::cout << "create: " << objPath.str << std::endl;
                    auto sensorPtr = std::make_shared<Sensor>(
                        this->conn, this->objServer, objPath.str, interfaces);
                    this->sensors.emplace(objPath.str, std::move(sensorPtr));
                }
            }
        },
        serviceName, "/xyz/openbmc_project/sensors",
        "org.freedesktop.DBus.ObjectManager", "GetManagedObjects");
}

void TedSensorMonitor::registerMatch()
{
    using namespace sdbusplus::match_rules;
    auto& bus = static_cast<sdbusplus::bus_t&>(*conn);
    if (!interfacesAddedMatch)
    {
        interfacesAddedMatch = std::make_unique<sdbusplus::match>(
            bus,
            interfacesAdded() + path_namespace("/xyz/openbmc_project/sensors") +
                sender(serviceName),
            [this](sdbusplus::message_t& m) { interfaceAddedCallback(m); });
    }
    if (!interfacesRemovedMatch)
    {
        interfacesRemovedMatch = std::make_unique<sdbusplus::match>(
            bus,
            interfacesRemoved() +
                path_namespace("/xyz/openbmc_project/sensors") +
                sender(serviceName),
            [this](sdbusplus::message_t& m) { interfaceRemovedCallback(m); });
    }
}

void TedSensorMonitor::interfaceAddedCallback(sdbusplus::message_t& m)
{
    sdbusplus::object_path objPath;
    DBusInterfaceMap ifaceMap;
    try
    {
        m.read(objPath, ifaceMap);
    }
    catch (const std::exception& e)
    {
        lg2::error("Failed to read object path");
        return;
    }

    if (!this->sensors.contains(objPath.str))
    {
        auto sensorPtr = std::make_shared<Sensor>(this->conn, this->objServer,
                                                  objPath.str, ifaceMap);
        this->sensors.emplace(objPath.str, std::move(sensorPtr));
    }
    else
    {
        this->sensors.at(objPath.str)->addInterfaces(ifaceMap);
    }
}

void TedSensorMonitor::interfaceRemovedCallback(sdbusplus::message_t& m)
{
    sdbusplus::object_path objPath;
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

    if (!this->sensors.contains(objPath.str))
    {
        lg2::error(
            "Received InterfacesRemoved for unknown object path {OBJPATH}",
            "OBJPATH", objPath.str);
        return;
    }
    this->sensors.at(objPath.str)->removeInterfaces(interfaces);
}
