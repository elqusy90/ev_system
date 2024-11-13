#include "TemperatureSensor.hpp"
#include <random>

int TemperatureSensor::measure() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> distribution(-20, 120); // Temperature range -20°C to 120°C
    return distribution(generator);
}
