#include "DeviceBaseClass.h"

DeviceBaseClass::DeviceBaseClass() : deviceID(0) {}

DeviceBaseClass::~DeviceBaseClass() {}

void DeviceBaseClass::setDeviceID() {
    std::cout << "Set Device ID: ";
    std::cin >> deviceID;
}

short DeviceBaseClass::getDeviceID() const {
    return deviceID;
}
