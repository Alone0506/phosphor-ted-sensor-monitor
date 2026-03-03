#pragma once

#include <nlohmann/json.hpp>
#include <phosphor-logging/lg2.hpp>
#include <sdbusplus/bus.hpp>
#include <sdeventplus/event.hpp>
#include <sdeventplus/utility/timer.hpp>
#include <xyz/openbmc_project/Association/Definitions/server.hpp>
#include <xyz/openbmc_project/Sensor/Threshold/Critical/server.hpp>
#include <xyz/openbmc_project/Sensor/Threshold/Warning/server.hpp>
#include <xyz/openbmc_project/Sensor/Value/server.hpp>
#include <xyz/openbmc_project/State/Decorator/Availability/server.hpp>

#include <string>

namespace phosphor::ted_sensor_monitor
{
using Json = nlohmann::json;

using ValueIface = sdbusplus::server::xyz::openbmc_project::sensor::Value;

using CriticalIface =
    sdbusplus::server::xyz::openbmc_project::sensor::threshold::Critical;

using WarningIface =
    sdbusplus::server::xyz::openbmc_project::sensor::threshold::Warning;

using AvailabilityInterface =
    sdbusplus::server::xyz::openbmc_project::state::decorator::Availability;

using AssociationIface =
    sdbusplus::server::xyz::openbmc_project::association::Definitions;

template <typename... T>
using ServerObject = typename sdbusplus::server::object_t<T...>;
using TedIface = ServerObject<ValueIface, CriticalIface, WarningIface,
                              AvailabilityInterface, AssociationIface>;

inline static sdbusplus::bus::match_t startTedSensorMonitor(
    std::shared_ptr<sdbusplus::asio::connection> conn,
    std::shared_ptr<sdbusplus::asio::object_server> objectServer)
{
    auto monitorCallback = [conn](sdbusplus::message_t& msg) { return; }

    sdbusplus::bus::match_t monitor(static_cast<sdbusplus::bus_t&>(*conn),
                                    "type='signal', member='PropertyChanged'",
                                    std::move(monitorCallback));
    return monitor;
}

} // namespace phosphor::ted_sensor_monitor
