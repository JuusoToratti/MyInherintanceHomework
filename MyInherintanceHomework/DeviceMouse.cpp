// DeviceMouse.cpp
#include "DeviceMouse.h"

DeviceMouse::DeviceMouse() : primaryButton(0) {}

DeviceMouse::~DeviceMouse() {}

void DeviceMouse::setPrimaryButton() {
    std::cout << "Set Primary Button (1 for left, 2 for right): ";
    std::cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton() const {
    return primaryButton;
}
