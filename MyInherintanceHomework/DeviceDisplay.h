#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include "DeviceBaseClass.h"

class DeviceDisplay : public DeviceBaseClass {
private:
    short displayResolution;

public:
    DeviceDisplay();
    ~DeviceDisplay();

    void setDisplayResolution();
    short getDisplayResolution() const;
};

#endif
