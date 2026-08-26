/*
Author: Amit Gupta
Date: 20-Aug-2026
Program: Movie ticket booking
*/

#include <iostream>
using namespace std;

int main() {
    int movie; // movie code
    cout << "Enter movie (1=Action,2=Comedy,3=Drama):- ";
    cin >> movie;

    switch(movie) {
        case 1: cout << "Ticket booked: Action Movie"; 
        break;
        case 2: cout << "Ticket booked: Comedy Movie"; 
        break;
        case 3: cout << "Ticket booked: Drama Movie"; 
        break;
        default: cout << "Invalid movie choice!";
    }
    return 0;
}
