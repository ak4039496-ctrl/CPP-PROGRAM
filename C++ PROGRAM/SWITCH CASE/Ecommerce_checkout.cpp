/*
Author: Amit Gupta
Date: 18-Aug-2026
E-commerce checkout 

*/

#include <iostream>
using namespace std;

int main() {
    int method; // payment method code
    cout << "Enter payment method (1=Credit Card,2=UPI,3=Cash):- ";
    cin >> method;

    switch(method) {
        case 1: cout << "Discount => 10% (Credit Card)"; 
        break; // credit card
        case 2: cout << "Discount => 5% (UPI)"; break;          // UPI
        case 3: cout << "No Discount (Cash)"; break;           // cash
        default: cout << "Invalid payment method!";
    }
    return 0;
}
