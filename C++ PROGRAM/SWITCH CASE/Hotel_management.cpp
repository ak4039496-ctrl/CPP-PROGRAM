/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: Hotel management system 
*/

#include <iostream>
using namespace std;

int main() {
    int room; // room type code
    cout << "Enter room type (1=Deluxe,2=Suite,3=Standard):- ";
    cin >> room;

    switch(room) {
        case 1: cout << "Room booked: Deluxe"; break;   // deluxe room
        case 2: cout << "Room booked: Suite"; break;    // suite room
        case 3: cout << "Room booked: Standard"; break; // standard room
        default: cout << "Invalid room type!";          // wrong input
    }
    return 0;
}
