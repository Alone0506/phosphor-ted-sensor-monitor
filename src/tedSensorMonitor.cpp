
#include "tedSensorMonitor.hpp"

#include <phosphor-logging/lg2.hpp>

// see phosphor-logging/lib/include/phosphor-logging/lg2.hpp
PHOSPHOR_LOG2_USING_WITH_FLAGS;

// systemctl status phosphor-ted-sensor-monitor.service
// journalctl | grep -i ted-sensor-monitor
void TedSensorMonitor::initMatches()
{
    nameOwnerChangedMatch = std::make_unique<sdbusplus::bus::match_t>(
        static_cast<sdbusplus::bus_t&>(*conn),
        sdbusplus::bus::match::rules::nameOwnerChanged(),
        [this](sdbusplus::message_t& m) {
            auto [name, oldOwner,
                  newOwner] = m.unpack<std::string, std::string, std::string>();

            if (name.starts_with(':'))
            {
                // we should do nothing with unique-name connections
                return;
            }

            lg2::error(
                "NameOwnerChanged: {NAME} oldOwner: {OLD} newOwner: {NEW}",
                "NAME", name, "OLD", oldOwner, "NEW", newOwner);
        });

    // interfacesAddedMatch = std::make_unique<sdbusplus::bus::match_t>(
    //     static_cast<sdbusplus::bus_t&>(*conn),
    //     sdbusplus::bus::match::rules::interfacesAdded(),
    //     [this](sdbusplus::message_t&) {});

    // interfacesRemovedMatch = std::make_unique<sdbusplus::bus::match_t>(
    //     static_cast<sdbusplus::bus_t&>(*conn),
    //     sdbusplus::bus::match::rules::interfacesRemoved(),
    //     [this](sdbusplus::message_t&) {});

    // propertyChangedMatch = std::make_unique<sdbusplus::bus::match_t>(
    //     static_cast<sdbusplus::bus_t&>(*conn),
    //     "type='signal', member='PropertiesChanged'",
    //     [this](sdbusplus::message_t&) {});
}
