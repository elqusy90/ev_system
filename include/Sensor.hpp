#ifndef SENSOR_HPP
#define SENSOR_HPP

class Sensor {
public:
    virtual ~Sensor() = default;

    // Pure virtual function to ensure derived classes implement this
    virtual int measure() = 0;
};

#endif
