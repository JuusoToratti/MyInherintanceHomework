#include "DeviceTouchPad.h"

DeviceTouchPad::DeviceTouchPad() : touchPadSensitivity(0) {}

DeviceTouchPad::~DeviceTouchPad() {}

void DeviceTouchPad::setTouchPadSensitivity() {
    std::cout << "Set Touch Pad Sensitivity (1-5): ";
    std::cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity() const {
    return touchPadSensitivity;
}
