#ifndef BATTERYSENSOR_HPP
#define BATTERYSENSOR_HPP

#include "Sensor.hpp"

class BatterySensor : public Sensor {
public:
    int measure() override;          // Returns charge level
    int getTemperature(); // Additional method for battery temperature
};

#endif
