
#include "DeviceDisplay.h"

DeviceDisplay::DeviceDisplay() : displayResolution(0) {}

DeviceDisplay::~DeviceDisplay() {}

void DeviceDisplay::setDisplayResolution() {
    std::cout << "Set Display Resolution: ";
    std::cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution() const {
    return displayResolution;
}
