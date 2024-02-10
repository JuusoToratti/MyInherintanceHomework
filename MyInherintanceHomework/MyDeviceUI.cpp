#include "MyDeviceUI.h"

MyDeviceUI::MyDeviceUI() {}

MyDeviceUI::~MyDeviceUI() {}

void MyDeviceUI::uiShowMenu() {
    std::cout << "DEVICE MENU\n";
    std::cout << "1: Set Mouse Information\n";
    std::cout << "2: Set Touch Pad Information\n";
    std::cout << "3: Set Display Information\n";
    std::cout << "4: Show Devices Information\n";
    std::cout << "5: Finish\n";
    std::cout << "Choose: ";
}

void MyDeviceUI::uiSetMouseInformation() {
    std::cout << "SET MOUSE INFORMATION\n";
    objectDeviceMouse.setDeviceID();
    objectDeviceMouse.setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation() {
    std::cout << "SET TOUCH PAD INFORMATION\n";
    objectDeviceTouchPad.setDeviceID();
    objectDeviceTouchPad.setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation() {
    std::cout << "SET DISPLAY INFORMATION\n";
    objectDeviceDisplay.setDeviceID();
    objectDeviceDisplay.setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() {
    std::cout << "Mouse Information - Device ID: " << objectDeviceMouse.getDeviceID()
              << ", Primary Button: " << objectDeviceMouse.getPrimaryButton() << "\n";

    std::cout << "Touch Pad Information - Device ID: " << objectDeviceTouchPad.getDeviceID()
              << ", Touch Pad Sensitivity: " << objectDeviceTouchPad.getTouchPadSensitivity() << "\n";

    std::cout << "Display Information - Device ID: " << objectDeviceDisplay.getDeviceID()
              << ", Display Resolution: " << objectDeviceDisplay.getDisplayResolution() << "\n";
}
