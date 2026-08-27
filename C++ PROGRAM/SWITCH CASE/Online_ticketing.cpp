/*
Author: Amit Gupta
Date: 22-Aug-2026
Program: Online ticketing system 
*/

#include <iostream>
using namespace std;

int main() {
    int ticket; // ticket type
    cout << "Enter ticket (1=Movie,2=Concert,3=Sports):- ";
    cin >> ticket;

    switch(ticket) {
        case 1: cout << "Movie Ticket Booked"; break;     // movie
        case 2: cout << "Concert Ticket Booked"; break;   // concert
        case 3: cout << "Sports Ticket Booked"; break;    // sports
        default: cout << "Invalid ticket type!";          // wrong input
    }
    return 0;
}
