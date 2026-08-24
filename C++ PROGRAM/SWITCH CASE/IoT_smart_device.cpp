/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: IoT smart device control 
*/

#include <iostream>
using namespace std;

int main() {
    int device; // IoT device code
    cout << "Enter device (1=Camera,2=Sensor,3=Alarm):- ";
    cin >> device;

    switch(device) {
        case 1: 
        cout << "Camera Activated"; break;   // camera
        case 2: 
        cout << "Sensor Activated"; break;   // sensor
        case 3: 
        cout << "Alarm Activated"; break;    // alarm
        default: 
        cout << "Invalid device!";          // wrong input
    }
    return 0;
}
