/*
Author: Amit Gupta
Date: 21-Aug-2026
Program: Railway booking system
*/

#include <iostream>
using namespace std;

int main() {
    int seat; // seat type
    cout << "Enter seat type (1=Sleeper,2=AC,3=General):- ";
    cin >> seat;

    switch(seat) {
        case 1: cout << "Sleeper Seat Booked"; break;   // sleeper
        case 2: cout << "AC Seat Booked"; break;        // AC
        case 3: cout << "General Seat Booked"; break;   // general
        default: cout << "Invalid seat type!";          // wrong input
    }
    return 0;
}
