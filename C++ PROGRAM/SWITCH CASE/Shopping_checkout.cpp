/*
Author: Amit Gupta
Date: 22-Aug-2026
Shopping checkout system 
*/

#include <iostream>
using namespace std;

int main() {
    int method; // payment method
    cout << "Enter payment (1=Credit Card,2=UPI,3=Cash):- ";
    cin >> method;

    switch(method) {
        case 1: cout << "Payment via Credit Card"; break; // card
        case 2: cout << "Payment via UPI"; break;         // UPI
        case 3: cout << "Payment via Cash"; break;        // cash
        default: cout << "Invalid payment method!";       // wrong input
    }
    return 0;
}
