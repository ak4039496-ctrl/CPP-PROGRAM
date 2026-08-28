/*
Author: Amit Gupta
Date: 22-Aug-2026
Smart device control
*/

#include <iostream>
using namespace std;

int main() {
    int device; // variable for device type
    cout << "Enter device (1=Light,2=Fan,3=AC):- ";
    cin >> device;

    switch(device) {
        case 1: cout << "Light turned ON"; break; // light control
        case 2: cout << "Fan turned ON"; break;   // fan control
        case 3: cout << "AC turned ON"; break;    // AC control
        default: cout << "Invalid device!";       // wrong input
    }
    return 0;
}
