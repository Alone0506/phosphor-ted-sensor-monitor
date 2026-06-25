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
        initial();
    }

  private:
    void initial();
    void registerMatch();
    void interfaceAddedCallback(sdbusplus::message_t& m);
    void interfaceRemovedCallback(sdbusplus::message_t& m);

    std::shared_ptr<sdbusplus::asio::connection> conn;
    std::shared_ptr<sdbusplus::asio::object_server> objServer;

    std::unique_ptr<sdbusplus::match> interfacesAddedMatch = nullptr;
    std::unique_ptr<sdbusplus::match> interfacesRemovedMatch = nullptr;

    std::map<DBusPath, std::shared_ptr<Sensor>> sensors;
};
