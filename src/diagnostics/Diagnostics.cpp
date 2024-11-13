#include "Diagnostics.hpp"
#include "Logger.hpp"

void Diagnostics::check(int speed, int batteryLevel, int temp, int proximity) {
    if (speed > 120) Logger::getInstance().log("Warning: Speed exceeds safe limit.");
    if (batteryLevel < 20) Logger::getInstance().log("Warning: Low battery.");
    if (temp > 90) Logger::getInstance().log("Warning: Engine overheating.");
    if (proximity < 10) Logger::getInstance().log("Warning: Unsafe proximity to another vehicle.");
}
