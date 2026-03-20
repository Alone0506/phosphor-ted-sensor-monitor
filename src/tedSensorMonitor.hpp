#pragma once

#include <sdbusplus/asio/connection.hpp>
#include <sdbusplus/asio/object_server.hpp>
#include <sdbusplus/bus/match.hpp>
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

    std::unique_ptr<sdbusplus::bus::match_t> nameOwnerChangedMatch = nullptr;
    std::unique_ptr<sdbusplus::bus::match_t> interfacesAddedMatch = nullptr;
    std::unique_ptr<sdbusplus::bus::match_t> interfacesRemovedMatch = nullptr;
    // std::unique_ptr<sdbusplus::bus::match_t> propertyChangedMatch = nullptr;
};
