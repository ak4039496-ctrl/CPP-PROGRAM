/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if vehicle speed is within limit using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter vehicle speed (km/h):- ";
    cin >> speed;

    if (speed > 80) {
        cout << "Over Speeding Fine imposed." << endl;
    } else {
        cout << "Speed is within limit." << endl;
    }

    return 0;
}
