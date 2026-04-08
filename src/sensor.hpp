#pragma once

#include <sdbusplus/asio/connection.hpp>
#include <sdbusplus/asio/object_server.hpp>
#include <sdbusplus/bus/match.hpp>

#include <map>
#include <memory>
#include <string>
#include <tuple>
#include <variant>
#include <vector>

using DBusProperty = std::string;

using Association = std::tuple<std::string, std::string, std::string>;
using DBusValue =
    std::variant<bool, uint8_t, int16_t, uint16_t, int32_t, uint32_t, int64_t,
                 uint64_t, double, std::string, std::vector<uint8_t>,
                 std::vector<uint16_t>, std::vector<uint32_t>,
                 std::vector<std::string>, std::vector<Association>>;

using DBusPropertyMap = std::map<DBusProperty, DBusValue>;
using DBusInterface = std::string;
using DBusInterfaceMap = std::map<DBusInterface, DBusPropertyMap>;
using DBusPath = std::string;

static constexpr auto serviceName = "xyz.openbmc_project.TedSensor";
class Sensor
{
  public:
    Sensor(std::shared_ptr<sdbusplus::asio::connection> conn,
           std::shared_ptr<sdbusplus::asio::object_server> objServer,
           const DBusPath& path, const DBusInterfaceMap& interfaces);
    ~Sensor() = default;

    void createMatch();
    void addInterfaces(const DBusInterfaceMap& ifaceMap);
    void removeInterfaces(const std::vector<DBusInterface>& ifaces);

  private:
    std::shared_ptr<sdbusplus::asio::connection> conn;
    std::shared_ptr<sdbusplus::asio::object_server> objServer;
    std::string _path;
    std::map<DBusInterface, std::shared_ptr<sdbusplus::asio::dbus_interface>>
        interfaces;
    std::unique_ptr<sdbusplus::bus::match_t> propertyChangedMatches;
};
