/*
Author: Amit Gupta
Date: 18-Aug-2026
Airline enquiry system 
*/

#include <iostream>
using namespace std;

int main() {
    int status; // flight status code
    cout << "Enter flight status (1=On Time,2=Delayed,3=Cancelled): ";
    cin >> status;

    switch(status) {
        case 1: cout << "Flight is On Time"; break;     // on time
        case 2: cout << "Flight is Delayed"; break;     // delayed
        case 3: cout << "Flight is Cancelled"; break;   // cancelled
        default: cout << "Invalid status!";             // wrong input
    }
    return 0;
}
