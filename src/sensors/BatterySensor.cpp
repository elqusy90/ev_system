#include "BatterySensor.hpp"
#include <random>

int BatterySensor::measure() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> levelDistribution(0, 100); // Battery level 0-100%
    return levelDistribution(generator);
}

int BatterySensor::getTemperature() {
    static std::default_random_engine generator;
    static std::uniform_int_distribution<int> tempDistribution(20, 60);  // Battery temp 20-60°C
    return tempDistribution(generator);
}
