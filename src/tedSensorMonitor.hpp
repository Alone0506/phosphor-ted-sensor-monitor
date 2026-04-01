#pragma once

#include "sensor.hpp"

#include <sdbusplus/asio/connection.hpp>
#include <sdbusplus/asio/object_server.hpp>
#include <sdbusplus/bus/match.hpp>

#include <map>
#include <memory>
#include <string>

class TedSensorMonitor
{
  public:
    TedSensorMonitor(
        std::shared_ptr<sdbusplus::asio::connection> conn,
        std::shared_ptr<sdbusplus::asio::object_server> objectServer) :
        conn(conn), objServer(objectServer)
    {
        initMatches();
    }

  private:
    void initMatches();

    std::shared_ptr<sdbusplus::asio::connection> conn;
    std::shared_ptr<sdbusplus::asio::object_server> objServer;

    std::unique_ptr<sdbusplus::bus::match_t> interfacesAddedMatch = nullptr;
    std::unique_ptr<sdbusplus::bus::match_t> interfacesRemovedMatch = nullptr;
    std::unique_ptr<sdbusplus::bus::match_t> propertyChangedMatch = nullptr;

    std::map<DBusPath, std::shared_ptr<Sensor>> sensors;
};
