#ifndef RADARSENSOR_HPP
#define RADARSENSOR_HPP

#include "Sensor.hpp"

class RadarSensor : public Sensor {
public:
    int measure() override;
};

#endif
