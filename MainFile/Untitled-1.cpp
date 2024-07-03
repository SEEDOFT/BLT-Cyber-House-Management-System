#include <iostream>
#include <windows.h>
#include <XInput.h>

void vibrateController(int leftVal, int rightVal) {
    // Create a Vibraton State
    XINPUT_VIBRATION vibration;
    ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
    vibration.wLeftMotorSpeed = leftVal; // Use any value between 0-65535 here
    vibration.wRightMotorSpeed = rightVal; // Use any value between 0-65535 here

    // Vibrate the controller
    XInputSetState(0, &vibration);
}

void stopVibration() {
    // Stop vibration
    XINPUT_VIBRATION vibration;
    ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
    XInputSetState(0, &vibration);
}

int main() {
    int condition;
    std::cout << "Enter a number (enter 1 for correct condition): ";
    std::cin >> condition;

    if (condition != 1) {
        std::cout << "Wrong condition!" << std::endl;
        vibrateController(65535, 65535); // Full vibration
        Sleep(2000); // Vibrate for 2 seconds
        stopVibration();
    } else {
        std::cout << "Correct condition!" << std::endl;
    }

    return 0;
}
