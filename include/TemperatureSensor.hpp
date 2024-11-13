#ifndef TEMPERATURESENSOR_HPP
#define TEMPERATURESENSOR_HPP

#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
public:
    int measure() override;
};

#endif
