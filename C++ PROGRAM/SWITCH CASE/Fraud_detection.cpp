/*
Author: Amit Gupta
Date: 19-Aug-2026
Banking fraud detection 
*/

#include <iostream>
using namespace std;

int main() {
    int alert; // fraud alert code
    cout << "Enter alert (1=Safe,2=Suspicious,3=Fraud):- ";
    cin >> alert;

    switch(alert) {
        case 1: cout << "Transaction Safe"; break;        // safe
        case 2: cout << "Suspicious Transaction"; break;  // suspicious
        case 3: cout << "Fraud Detected!"; break;         // fraud
        default: cout << "Invalid alert code!";           // wrong input
    }
    return 0;
}
