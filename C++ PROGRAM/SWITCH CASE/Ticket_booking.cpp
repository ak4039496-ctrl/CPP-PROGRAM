/*
Author: Amit Gupta
Date: 22-Aug-2026
Ticket booking system 
*/

#include <iostream>
using namespace std;

int main() {
    int transport; // transport type
    cout << "Enter transport (1=Bus,2=Train,3=Flight):- ";
    cin >> transport;

    switch(transport) {
        case 1: cout << "Bus Ticket Booked"; break;
        case 2: cout << "Train Ticket Booked"; break;
        case 3: cout << "Flight Ticket Booked"; break;
        default: cout << "Invalid transport!";
    }
    return 0;
}
