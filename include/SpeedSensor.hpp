#ifndef SPEEDSENSOR_HPP
#define SPEEDSENSOR_HPP

#include "Sensor.hpp"

class SpeedSensor : public Sensor {
public:
    int measure() override; // Override keyword enforces implementation
};

#endif
