/*
Author: Amit Gupta
Date: 18-Aug-2026
 Bank alert system 
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // variable for alert type
    cout << "Enter alert (1=Low Balance,2=Transaction Success,3=Fraud Alert):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "Alert: Low Balance"; 
        break;          // low balance
        case 2: cout << "Alert: Transaction Successful"; 
        break; // transaction success
        case 3: cout << "Alert: Possible Fraud Detected"; 
        break; // fraud alert
        default: cout << "Invalid alert type!";               // wrong input
    }
    return 0;
}
