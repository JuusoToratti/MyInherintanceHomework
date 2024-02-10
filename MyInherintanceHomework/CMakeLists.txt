cmake_minimum_required(VERSION 3.5)

project(MyInherintanceHomework LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MyInherintanceHomework DeviceBaseClass.cpp
    DeviceBaseClass.h
    DeviceDisplay.cpp
    DeviceDisplay.h
    MyDeviceUI.h
    MyDeviceUI.cpp
    main.cpp
    DeviceMouse.h
    DeviceTouchPad.cpp
    DeviceTouchPad.h
    DeviceMouse.cpp)

include(GNUInstallDirs)
install(TARGETS MyInherintanceHomework
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
