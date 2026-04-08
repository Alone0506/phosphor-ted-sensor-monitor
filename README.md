# phosphor-ted-sensor-monitor

`phosphor-ted-sensor-monitor` is a D-Bus mirror service for sensor objects. It
watches sensor objects exposed by `xyz.openbmc_project.TedSensor` and
re-publishes them on `xyz.openbmc_project.TedSensorMonitor` with the same object
paths, interfaces, and property values.

This project does not create simulation sensors and does not parse sensor JSON
configs. It only monitors and mirrors an existing sensor service.

## D-Bus roles

- Source service (watched): `xyz.openbmc_project.TedSensor`
- Mirror service (this daemon): `xyz.openbmc_project.TedSensorMonitor`
- Sensor namespace: `/xyz/openbmc_project/sensors`

## Runtime behavior

At startup, the daemon:

1. Requests D-Bus name `xyz.openbmc_project.TedSensorMonitor`.
2. Registers signal matches from `xyz.openbmc_project.TedSensor` under
   `/xyz/openbmc_project/sensors` for:
   - `org.freedesktop.DBus.ObjectManager.InterfacesAdded`
   - `org.freedesktop.DBus.ObjectManager.InterfacesRemoved`
3. Calls `GetManagedObjects` on the source service to bootstrap existing sensor
   objects.

For each sensor object path:

- Creates matching interfaces locally via `sdbusplus::asio::object_server`.
- Registers all initial properties with concrete types.
- Listens for `org.freedesktop.DBus.Properties.PropertiesChanged` on that path
  (from source service only), then updates mirrored properties.
- Removes interfaces when source emits `InterfacesRemoved`.

Implementation notes:

- Interfaces starting with `org.freedesktop.DBus` are ignored when mirroring.
- Mirroring is one-way (`TedSensor` -> `TedSensorMonitor`).
- State is not persisted; data is rebuilt from D-Bus at daemon start.

## Build

Dependencies:

- `sdbusplus`
- `phosphor-logging`
- `systemd` (for unit installation)

Local build:

```bash
meson setup build
meson compile -C build
meson install -C build
```

## systemd service

Installed unit: `phosphor-ted-sensor-monitor.service`

- `Type=dbus`
- `BusName=xyz.openbmc_project.TedSensorMonitor`
- `Requires=phosphor-ted-sensor.service`
- `After=phosphor-ted-sensor.service`

## Quick verification (BMC/QEMU)

```bash
# Service status
systemctl status phosphor-ted-sensor.service phosphor-ted-sensor-monitor.service

# Compare source and mirror trees
busctl tree xyz.openbmc_project.TedSensor
busctl tree xyz.openbmc_project.TedSensorMonitor

# Compare one sensor object on both services
busctl introspect xyz.openbmc_project.TedSensor \
    /xyz/openbmc_project/sensors/temperature/TedSensor1
busctl introspect xyz.openbmc_project.TedSensorMonitor \
    /xyz/openbmc_project/sensors/temperature/TedSensor1

# Monitor source signals
dbus-monitor --system "type='signal',sender='xyz.openbmc_project.TedSensor'"
```

Optional dynamic test (if source service supports Add/Remove API):

```bash
busctl call xyz.openbmc_project.TedSensor \
    /xyz/openbmc_project/AddRemoveSensor \
    xyz.openbmc_project.AddRemoveSensor RemoveSensor s "TedSensor2"

busctl call xyz.openbmc_project.TedSensor \
    /xyz/openbmc_project/AddRemoveSensor \
    xyz.openbmc_project.AddRemoveSensor AddSensor s "TedSensor2"
```

## Logging

```bash
journalctl -u phosphor-ted-sensor-monitor.service -f
```
