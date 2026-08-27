/*
Author: Amit Gupta
Date: 21-Aug-2026
Program: Payment gateway 
*/

#include <iostream>
using namespace std;

int main() {
    int pay; // variable for payment method
    cout << "Enter payment (1=Credit Card,2=UPI,3=NetBanking):- ";
    cin >> pay;

    switch(pay) {
        case 1: cout << "Payment via Credit Card"; break; // card payment
        case 2: cout << "Payment via UPI"; break;         // UPI payment
        case 3: cout << "Payment via NetBanking"; break;  // netbanking
        default: cout << "Invalid payment method!";       // wrong input
    }
    return 0;
}
