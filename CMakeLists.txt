cmake_minimum_required(VERSION 3.10)
project(autonomous_vehicle)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_C_COMPILER gcc)


include_directories(include)

add_executable(autonomous_vehicle
    src/main.cpp
    src/sensors/SpeedSensor.cpp
    src/sensors/RadarSensor.cpp
    src/sensors/TemperatureSensor.cpp
    src/sensors/BatterySensor.cpp
    src/ecu/AdaptiveCruiseControl.cpp
    src/diagnostics/Diagnostics.cpp
    src/logger/Logger.cpp
)
