/*
Author: Amit Gupta
Date: 22-Aug-2026
Program: Weather alert system 
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // weather alert code
    cout << "Enter alert (1=Sunny,2=Rain,3=Storm):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "Weather Alert: Sunny Day"; break;
        case 2: cout << "Weather Alert: Heavy Rain"; break;
        case 3: cout << "Weather Alert: Storm Warning"; break;
        default: cout << "Invalid alert!";
    }
    return 0;
}
