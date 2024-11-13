#ifndef ADAPTIVECRUISECONTROL_HPP
#define ADAPTIVECRUISECONTROL_HPP

#include "SpeedSensor.hpp"
#include "RadarSensor.hpp"
#include "TemperatureSensor.hpp"

class AdaptiveCruiseControl {
public:
    void adjust(int speed, int proximity, int temp);
};

#endif
