#include "SpeedSensor.hpp"
#include <random>

int SpeedSensor::measure() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> distribution(0, 150); // Speed range 0-150 km/h
    return distribution(generator);
}
