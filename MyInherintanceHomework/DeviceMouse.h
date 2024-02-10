#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

#include "DeviceBaseClass.h"

class DeviceMouse : public DeviceBaseClass {
private:
    short primaryButton;

public:
    DeviceMouse();
    ~DeviceMouse();

    void setPrimaryButton();
    short getPrimaryButton() const;
};

#endif
