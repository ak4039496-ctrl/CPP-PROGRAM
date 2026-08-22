/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Cyber alert system using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // alert code
    cout << "Enter alert (1=Low,2=Medium,3=High):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "Alert: Low Risk"; break;     // low
        case 2: cout << "Alert: Medium Risk"; break;  // medium
        case 3: cout << "Alert: High Risk"; break;    // high
        default: cout << "Unknown alert!";            // wrong input
    }
    return 0;
}
