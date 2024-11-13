#include "SpeedSensor.hpp"
#include "RadarSensor.hpp"
#include "TemperatureSensor.hpp"
#include "BatterySensor.hpp"
#include "AdaptiveCruiseControl.hpp"
#include "Diagnostics.hpp"
#include "Logger.hpp"

#include <thread>
#include <chrono>
#include <memory>

int main() {
    // Using unique pointers for automatic memory management
    std::unique_ptr<Sensor> speedSensor = std::make_unique<SpeedSensor>();
    std::unique_ptr<Sensor> radarSensor = std::make_unique<RadarSensor>();
    std::unique_ptr<Sensor> tempSensor = std::make_unique<TemperatureSensor>();
    std::unique_ptr<BatterySensor> batterySensor = std::make_unique<BatterySensor>();

    AdaptiveCruiseControl cruiseControl;
    Diagnostics diagnostics;

    while (true) {
        int speed = speedSensor->measure();
        int proximity = radarSensor->measure();
        int temp = tempSensor->measure();
        int batteryLevel = batterySensor->measure();
        int batteryTemp = batterySensor->getTemperature();

        diagnostics.check(speed, batteryLevel, temp, proximity);
        cruiseControl.adjust(speed, proximity, temp);

        std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate time delay
    }

    return 0;
}
