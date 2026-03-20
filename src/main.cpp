#include "tedSensorMonitor.hpp"

#include <boost/asio/io_context.hpp>
#include <sdbusplus/asio/connection.hpp>
#include <sdbusplus/asio/object_server.hpp>
#include <sdbusplus/server.hpp>

int main()
{
    // setup connection to dbus
    boost::asio::io_context io;
    auto conn = std::make_shared<sdbusplus::asio::connection>(io);

    // IPMI Object
    conn->request_name("xyz.openbmc_project.TedSensorMonitor");
    auto objServer = std::make_shared<sdbusplus::asio::object_server>(conn);
    TedSensorMonitor t(conn, objServer);

    io.run();
    return 0;
}
