#include "MyDeviceUI.h"

int main() {
    MyDeviceUI myUI;

    int choice;
    do {
        myUI.uiShowMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            myUI.uiSetMouseInformation();
            break;
        case 2:
            myUI.uiSetTouchPadInformation();
            break;
        case 3:
            myUI.uiSetDisplayInformation();
            break;
        case 4:
            myUI.uiShowDeviceInformation();
            break;
        case 5:
            std::cout << "Finishing the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
