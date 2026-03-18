project(
    'phosphor-ted-sensor-monitor',
    'cpp',
    version: '1.0',
    default_options: [
        'buildtype=debugoptimized',
        'cpp_std=c++23',
        'warning_level=3',
        'werror=true',
    ],
    meson_version: '>=1.1.1',
)

pkgdatadir = get_option('datadir') / meson.project_name()

executable(
    'phosphor-ted-sensor-monitor',
    [
        'src/main.cpp',
        'src/tedSensorMonitor.cpp',
    ],
    dependencies: [
        dependency('phosphor-logging'),
        dependency('sdbusplus'),
    ],
    install: true,
    install_dir: get_option('bindir'),
)

systemd = dependency('systemd')
conf_data = configuration_data()
conf_data.set('bindir', get_option('prefix') / get_option('bindir'))
configure_file(
    input: 'phosphor-ted-sensor-monitor.service.in',
    output: 'phosphor-ted-sensor-monitor.service',
    configuration: conf_data,
    install: true,
    install_dir: systemd.get_variable('systemd_system_unit_dir'),
)
