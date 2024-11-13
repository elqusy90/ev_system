#ifndef DIAGNOSTICS_HPP
#define DIAGNOSTICS_HPP

#include "BatterySensor.hpp"
#include "SpeedSensor.hpp"
#include "TemperatureSensor.hpp"
#include "RadarSensor.hpp"

class Diagnostics {
public:
    void check(int speed, int batteryLevel, int temp, int proximity);
};

#endif
