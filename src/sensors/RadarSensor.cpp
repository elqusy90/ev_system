#include "RadarSensor.hpp"
#include <random>

int RadarSensor::measure() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> distribution(1, 100); // Distance range 1-100 meters
    return distribution(generator);
}
