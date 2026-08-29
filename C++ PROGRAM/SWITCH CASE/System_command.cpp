/*
Author: Amit Gupta
Date: 22-Aug-2026
System command executor
*/

#include <iostream>
using namespace std;

int main() {
    int cmd; // command code
    cout << "Enter command (1=Shutdown,2=Restart,3=Sleep):- ";
    cin >> cmd;

    switch(cmd) {
        case 1: cout << "System shutting down..."; break;
        case 2: cout << "System restarting..."; break;
        case 3: cout << "System going to sleep..."; break;
        default: cout << "Unknown command!";
    }
    return 0;
}
