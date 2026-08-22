/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Banking alert system using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // alert type
    cout << "Enter alert (1=Low Balance,2=Transaction Success,3=Fraud Alert):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "Alert: Low Balance"; break;          // balance low
        case 2: cout << "Alert: Transaction Successful"; break; // success
        case 3: cout << "Alert: Fraud Detected"; break;       // fraud
        default: cout << "Invalid alert!";                    // wrong input
    }
    return 0;
}
