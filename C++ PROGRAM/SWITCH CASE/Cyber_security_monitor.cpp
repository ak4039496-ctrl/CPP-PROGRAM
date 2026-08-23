/*
Author: Amit Gupta
Date: 18-Aug-2026
Cyber security monitor
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // alert level
    cout << "Enter alert (1=Low,2=Medium,3=High):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "System Safe: Low Risk"; 
        break;     // low
        case 2: cout << "Warning: Medium Risk"; 
        break;      // medium
        case 3: cout << "Critical: High Risk"; 
        break;       // high
        default: cout << "Invalid alert code!";             // wrong input
    }
    return 0;
}
