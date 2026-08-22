/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Cyber defense system using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int level; // defense level
    cout << "Enter defense level (1=Normal,2=Warning,3=Critical):- ";
    cin >> level;

    switch(level) {
        case 1: cout << "System Status: Normal"; break;       // safe
        case 2: cout << "System Status: Warning"; break;      // warning
        case 3: cout << "System Status: Critical Threat"; break; // critical
        default: cout << "Invalid level!";                    // wrong input
    }
    return 0;
}
