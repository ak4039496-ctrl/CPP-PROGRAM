/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Airline booking system using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int flight; // variable for flight type
    cout << "Enter flight (1=Domestic,2=International,3=Charter): ";
    cin >> flight;

    switch(flight) {
        case 1: cout << "Ticket booked: Domestic Flight"; break;   // domestic flight
        case 2: cout << "Ticket booked: International Flight"; break; // international flight
        case 3: cout << "Ticket booked: Charter Flight"; break;    // charter flight
        default: cout << "Invalid flight type!";                   // wrong input
    }
    return 0;
}
