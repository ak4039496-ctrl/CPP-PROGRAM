/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: IoT automation system 
*/

#include <iostream>
using namespace std;

int main() {
    int device; // IoT device code
    cout << "Enter device (1=Light,2=Camera,3=Sensor):- ";
    cin >> device;

    switch(device) {
        case 1: cout << "Light Activated"; break;   // light
        case 2: cout << "Camera Activated"; break;  // camera
        case 3: cout << "Sensor Activated"; break;  // sensor
        default: cout << "Invalid device!";         // wrong input
    }
    return 0;
}
