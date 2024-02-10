#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H

#include <iostream>

class DeviceBaseClass {
protected:
    short deviceID;

public:
    DeviceBaseClass();
    virtual ~DeviceBaseClass();

    void setDeviceID();
    short getDeviceID() const;
};

#endif
