/*
Author: Amit Gupta
Date: 22-Aug-2026
Traffic light simulation
*/

#include <iostream>
using namespace std;

int main() {
    int signal;
    cout << "Enter signal (1=Red,2=Yellow,3=Green):- ";
    cin >> signal;

    switch(signal) {
        case 1: cout << "Stop"; break;
        case 2: cout << "Ready"; break;
        case 3: cout << "Go"; break;
        default: cout << "Invalid signal";
    }
    return 0;
}
