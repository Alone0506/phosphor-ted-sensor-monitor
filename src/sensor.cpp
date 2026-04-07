#include "sensor.hpp"

Sensor::Sensor(std::shared_ptr<sdbusplus::asio::connection> conn,
               std::shared_ptr<sdbusplus::asio::object_server> objServer,
               const DBusPath& path, const DBusInterfaceMap& interfaces) :
    conn(conn), objServer(objServer), _path(path)
{
    createMatch();
    addInterfaces(interfaces);
}

void Sensor::createMatch()
{
    using namespace sdbusplus::bus::match::rules;
    const std::string propertyChangedMatchString =
        type::signal() + path(_path) + member("PropertiesChanged") +
        interface("org.freedesktop.DBus.Properties");

    propertyChangedMatches = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn), propertyChangedMatchString,
        [this](sdbusplus::message_t& m) {
            DBusInterface interface;
            DBusPropertyMap properties;

            m.read(interface, properties);

            if (this->interfaces.contains(interface))
            {
                // update properties on this interface
                auto ifacePtr = this->interfaces.at(interface);
                for (const auto& [prop, value] : properties)
                {
                    std::visit(
                        [&](const auto& concreteValue) {
                            ifacePtr->set_property(prop, concreteValue);
                        },
                        value);
                }
            }
        });
}

void Sensor::addInterfaces(const DBusInterfaceMap& ifaceMap)
{
    for (const auto& [iface, props] : ifaceMap)
    {
        if (iface.starts_with("org.freedesktop.DBus"))
        {
            continue;
        }
        if (this->interfaces.contains(iface))
        {
            continue;
        }
        auto ifacePtr = objServer->add_interface(_path, iface);
        for (const auto& [prop, value] : props)
        {
            std::visit(
                [&](const auto& concreteValue) {
                    ifacePtr->register_property(prop, concreteValue);
                },
                value);
        }
        ifacePtr->initialize();
        this->interfaces.emplace(iface, ifacePtr);
    }
}

void Sensor::removeInterfaces(const std::vector<DBusInterface>& ifaces)
{
    for (const auto& iface : ifaces)
    {
        auto it = this->interfaces.find(iface);
        if (it != this->interfaces.end())
        {
            objServer->remove_interface(it->second);
            this->interfaces.erase(it);
        }
    }
}
