# Remove & Add sensor (TedSensor2 as example)

```bash
busctl call xyz.openbmc_project.TedSensor /xyz/openbmc_project/AddRemoveSensor xyz.openbmc_project.AddRemoveSensor RemoveSensor s "TedSensor2";busctl call xyz.openbmc_project.TedSensor /xyz/openbmc_project/AddRemoveSensor xyz.openbmc_project.AddRemoveSensor AddSensor s "TedSensor2";journalctl | grep -i ted-sensor-monitor
```

```bash
root@evb-ast2600:~# dbus-monitor --system "type='signal',sender='xyz.openbmc_project.TedSensor'"
signal time=1773915752.549195 sender=org.freedesktop.DBus -> destination=:1.70 serial=4294967295 path=/org/freedesktop/DBus; interface=org.freedesktop.DBus; member=NameAcquired
   string ":1.70"
signal time=1773915752.549719 sender=org.freedesktop.DBus -> destination=:1.70 serial=4294967295 path=/org/freedesktop/DBus; interface=org.freedesktop.DBus; member=NameLost
   string ":1.70"
signal time=1773915769.912925 sender=:1.43 -> destination=(null destination) serial=11 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "Unit"
         variant             string "xyz.openbmc_project.Sensor.Value.Unit.DegreesC"
      )
   ]
   array [
   ]
signal time=1773915769.948967 sender=:1.43 -> destination=(null destination) serial=12 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Warning"
   array [
      dict entry(
         string "WarningHigh"
         variant             double 60
      )
   ]
   array [
   ]
signal time=1773915769.952814 sender=:1.43 -> destination=(null destination) serial=13 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Warning"
   array [
      dict entry(
         string "WarningLow"
         variant             double nan
      )
   ]
   array [
   ]
signal time=1773915769.976009 sender=:1.43 -> destination=(null destination) serial=14 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Critical"
   array [
      dict entry(
         string "CriticalHigh"
         variant             double 80
      )
   ]
   array [
   ]
signal time=1773915769.979513 sender=:1.43 -> destination=(null destination) serial=15 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Critical"
   array [
      dict entry(
         string "CriticalLow"
         variant             double nan
      )
   ]
   array [
   ]
signal time=1773915769.982492 sender=:1.43 -> destination=(null destination) serial=16 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "MaxValue"
         variant             double 127
      )
   ]
   array [
   ]
signal time=1773915770.038055 sender=:1.43 -> destination=(null destination) serial=17 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "MinValue"
         variant             double -128
      )
   ]
   array [
   ]
signal time=1773915770.041656 sender=:1.43 -> destination=(null destination) serial=18 path=/xyz/openbmc_project/sensors; interface=org.freedesktop.DBus.ObjectManager; member=InterfacesAdded
   object path "/xyz/openbmc_project/sensors/temperature/TedSensor1"
   array [
      dict entry(
         string "org.freedesktop.DBus.Peer"
         array [
         ]
      )
      dict entry(
         string "org.freedesktop.DBus.Introspectable"
         array [
         ]
      )
      dict entry(
         string "org.freedesktop.DBus.Properties"
         array [
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Association.Definitions"
         array [
            dict entry(
               string "Associations"
               variant                   array [
                  ]
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.State.Decorator.Availability"
         array [
            dict entry(
               string "Available"
               variant                   boolean true
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Threshold.Warning"
         array [
            dict entry(
               string "WarningHigh"
               variant                   double 60
            )
            dict entry(
               string "WarningLow"
               variant                   double nan
            )
            dict entry(
               string "WarningAlarmHigh"
               variant                   boolean false
            )
            dict entry(
               string "WarningAlarmLow"
               variant                   boolean false
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Threshold.Critical"
         array [
            dict entry(
               string "CriticalHigh"
               variant                   double 80
            )
            dict entry(
               string "CriticalLow"
               variant                   double nan
            )
            dict entry(
               string "CriticalAlarmHigh"
               variant                   boolean false
            )
            dict entry(
               string "CriticalAlarmLow"
               variant                   boolean false
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Value"
         array [
            dict entry(
               string "Value"
               variant                   double 0
            )
            dict entry(
               string "MaxValue"
               variant                   double 127
            )
            dict entry(
               string "MinValue"
               variant                   double -128
            )
            dict entry(
               string "Unit"
               variant                   string "xyz.openbmc_project.Sensor.Value.Unit.DegreesC"
            )
         ]
      )
   ]
signal time=1773915770.360667 sender=:1.43 -> destination=(null destination) serial=19 path=/xyz/openbmc_project/sensors/temperature/TedSensor1; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "Value"
         variant             double nan
      )
   ]
   array [
   ]
signal time=1773915822.488309 sender=:1.43 -> destination=(null destination) serial=20 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "Unit"
         variant             string "xyz.openbmc_project.Sensor.Value.Unit.DegreesC"
      )
   ]
   array [
   ]
signal time=1773915822.495018 sender=:1.43 -> destination=(null destination) serial=21 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Warning"
   array [
      dict entry(
         string "WarningHigh"
         variant             double 60
      )
   ]
   array [
   ]
signal time=1773915822.496897 sender=:1.43 -> destination=(null destination) serial=22 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Warning"
   array [
      dict entry(
         string "WarningLow"
         variant             double 10
      )
   ]
   array [
   ]
signal time=1773915822.500504 sender=:1.43 -> destination=(null destination) serial=23 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Critical"
   array [
      dict entry(
         string "CriticalHigh"
         variant             double 80
      )
   ]
   array [
   ]
signal time=1773915822.500807 sender=:1.43 -> destination=(null destination) serial=24 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Threshold.Critical"
   array [
      dict entry(
         string "CriticalLow"
         variant             double 0
      )
   ]
   array [
   ]
signal time=1773915822.501096 sender=:1.43 -> destination=(null destination) serial=25 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "MaxValue"
         variant             double 127
      )
   ]
   array [
   ]
signal time=1773915822.501381 sender=:1.43 -> destination=(null destination) serial=26 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "MinValue"
         variant             double -128
      )
   ]
   array [
   ]
signal time=1773915822.501668 sender=:1.43 -> destination=(null destination) serial=27 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Association.Definitions"
   array [
      dict entry(
         string "Associations"
         variant             array [
               struct {
                  string "chassis"
                  string "all_sensors"
                  string "/xyz/openbmc_project/inventory/system/board/Ted_Board"
               }
            ]
      )
   ]
   array [
   ]
signal time=1773915822.512768 sender=:1.43 -> destination=(null destination) serial=28 path=/xyz/openbmc_project/sensors; interface=org.freedesktop.DBus.ObjectManager; member=InterfacesAdded
   object path "/xyz/openbmc_project/sensors/temperature/TedSensor2"
   array [
      dict entry(
         string "org.freedesktop.DBus.Peer"
         array [
         ]
      )
      dict entry(
         string "org.freedesktop.DBus.Introspectable"
         array [
         ]
      )
      dict entry(
         string "org.freedesktop.DBus.Properties"
         array [
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Association.Definitions"
         array [
            dict entry(
               string "Associations"
               variant                   array [
                     struct {
                        string "chassis"
                        string "all_sensors"
                        string "/xyz/openbmc_project/inventory/system/board/Ted_Board"
                     }
                  ]
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.State.Decorator.Availability"
         array [
            dict entry(
               string "Available"
               variant                   boolean true
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Threshold.Warning"
         array [
            dict entry(
               string "WarningHigh"
               variant                   double 60
            )
            dict entry(
               string "WarningLow"
               variant                   double 10
            )
            dict entry(
               string "WarningAlarmHigh"
               variant                   boolean false
            )
            dict entry(
               string "WarningAlarmLow"
               variant                   boolean false
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Threshold.Critical"
         array [
            dict entry(
               string "CriticalHigh"
               variant                   double 80
            )
            dict entry(
               string "CriticalLow"
               variant                   double 0
            )
            dict entry(
               string "CriticalAlarmHigh"
               variant                   boolean false
            )
            dict entry(
               string "CriticalAlarmLow"
               variant                   boolean false
            )
         ]
      )
      dict entry(
         string "xyz.openbmc_project.Sensor.Value"
         array [
            dict entry(
               string "Value"
               variant                   double 0
            )
            dict entry(
               string "MaxValue"
               variant                   double 127
            )
            dict entry(
               string "MinValue"
               variant                   double -128
            )
            dict entry(
               string "Unit"
               variant                   string "xyz.openbmc_project.Sensor.Value.Unit.DegreesC"
            )
         ]
      )
   ]
signal time=1773915822.727889 sender=:1.43 -> destination=(null destination) serial=29 path=/xyz/openbmc_project/sensors/temperature/TedSensor2; interface=org.freedesktop.DBus.Properties; member=PropertiesChanged
   string "xyz.openbmc_project.Sensor.Value"
   array [
      dict entry(
         string "Value"
         variant             double nan
      )
   ]
   array [
   ]
```

```bash
root@evb-ast2600:~# journalctl | grep -i ted-sensor-monitor
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: InterfacesAdded: /xyz/openbmc_project/sensors/temperature/TedSensor1 sender: :1.43
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Association.Definitions, property: Associations
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalAlarmHigh
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalAlarmLow
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalHigh
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalLow
Mar 19 10:22:49 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningAlarmHigh
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningAlarmLow
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningHigh
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningLow
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: MaxValue
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: MinValue
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: Unit
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: Value
Mar 19 10:22:50 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.State.Decorator.Availability, property: Available
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: InterfacesAdded: /xyz/openbmc_project/sensors/temperature/TedSensor2 sender: :1.43
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Association.Definitions, property: Associations
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalAlarmHigh
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalAlarmLow
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalHigh
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Critical, property: CriticalLow
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningAlarmHigh
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningAlarmLow
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningHigh
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Threshold.Warning, property: WarningLow
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: MaxValue
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: MinValue
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: Unit
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.Sensor.Value, property: Value
Mar 19 10:23:42 evb-ast2600 phosphor-ted-sensor-monitor[280]: interface: xyz.openbmc_project.State.Decorator.Availability, property: Available
```
