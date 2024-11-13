#include "AdaptiveCruiseControl.hpp"
#include "Logger.hpp"

void AdaptiveCruiseControl::adjust(int speed, int proximity, int temp) {
    Logger::getInstance().log("Adaptive Cruise Control engaged.");
    if (temp > 90 || proximity < 20) {
        Logger::getInstance().log("Applying brakes due to high temperature or close obstacle.");
    } else if (speed > 100) {
        Logger::getInstance().log("Reducing speed for safety.");
    }
}
