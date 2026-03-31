#include "sensor.hpp"

Sensor::Sensor(std::shared_ptr<sdbusplus::asio::connection> conn,
               std::shared_ptr<sdbusplus::asio::object_server> server,
               const DBusPath& path, const DBusInterfaceMap& interfaces) :
    conn(conn), server(server), path(path)
{
    addInterfaces(interfaces);
    createMatch();
}

void Sensor::createMatch()
{
    const std::string propertyChangedMatchString =
        sdbusplus::bus::match::rules::propertiesChanged(
            path, "xyz.openbmc_project.TedSensor");

    auto match = std::make_unique<sdbusplus::bus::match_t>(
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
                    ifacePtr->set_property(prop, value);
                }
            }
        });

    propertyChangedMatches.push_back(std::move(match));
}

void Sensor::addInterfaces(const DBusInterfaceMap& interfaces)
{
    for (const auto& [iface, props] : interfaces)
    {
        if (this->interfaces.contains(iface))
        {
            continue;
        }
        auto ifacePtr = server->add_interface(path, iface);
        for (const auto& [prop, value] : props)
        {
            ifacePtr->register_property(prop, value);
        }
        ifacePtr->initialize();
        this->interfaces.emplace(iface, ifacePtr);
    }
}

void Sensor::removeInterfaces(const std::vector<DBusInterface>& interfaces)
{
    for (const auto& iface : interfaces)
    {
        auto it = this->interfaces.find(iface);
        if (it == this->interfaces.end())
        {
            continue;
        }
        server->remove_interface(it->second);
        this->interfaces.erase(it);
    }
}

std::string Sensor::getPath() const
{
    return path;
}
