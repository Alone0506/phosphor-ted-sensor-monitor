#pragma once

#include <sdbusplus/asio/connection.hpp>
#include <sdbusplus/asio/object_server.hpp>
#include <sdbusplus/bus/match.hpp>

#include <map>
#include <memory>
#include <string>
#include <variant>
#include <vector>

using DBusProperty = std::string;
using DBusValue =
    std::variant<std::string, bool, std::vector<uint8_t>,
                 std::vector<std::string>,
                 std::vector<std::tuple<std::string, std::string, std::string>>,
                 std::tuple<std::vector<uint8_t>, std::vector<uint8_t>>>;
using DBusPropertyMap = std::map<DBusProperty, DBusValue>;
using DBusInterface = std::string;
using DBusInterfaceMap = std::map<DBusInterface, DBusPropertyMap>;
using DBusPath = std::string;
using DBusObjectMap = std::map<DBusPath, DBusInterfaceMap>;

class Sensor
{
  public:
    Sensor(std::shared_ptr<sdbusplus::asio::connection> conn,
           std::shared_ptr<sdbusplus::asio::object_server> server,
           const DBusPath& path, const DBusInterfaceMap& interfaces);
    ~Sensor() = default;

    void createMatch();
    void addInterfaces(const DBusInterfaceMap& interfaces);
    void removeInterfaces(const std::vector<DBusInterface>& interfaces);
    std::string getPath() const;

  private:
    std::shared_ptr<sdbusplus::asio::connection> conn;
    std::shared_ptr<sdbusplus::asio::object_server> server;
    std::string path;
    std::map<DBusInterface, std::shared_ptr<sdbusplus::asio::dbus_interface>>
        interfaces;
    std::vector<std::unique_ptr<sdbusplus::bus::match_t>>
        propertyChangedMatches;
};
