/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Cyber security monitoring using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int level; // monitoring level
    cout << "Enter level (1=Normal,2=Suspicious,3=Critical):- ";
    cin >> level;

    switch(level) {
        case 1: cout << "System Status: Normal"; 
        break;       // normal
        case 2: cout << "System Status: Suspicious Activity"; 
        break; // suspicious
        case 3: cout << "System Status: Critical Threat"; 
        break;     // critical
        default: cout << "Invalid level!";                    // wrong input
    }
    return 0;
}
