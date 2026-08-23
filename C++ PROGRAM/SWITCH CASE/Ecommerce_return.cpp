/*
Author: Amit Gupta
Date: 18-Aug-2026
E-commerce return system 
*/

#include <iostream>
using namespace std;

int main() {
    int reason; // return reason code
    cout << "Enter return reason (1=Damaged,2=Wrong Item,3=Other): ";
    cin >> reason;

    switch(reason) {
        case 1: cout << "Return Accepted: Damaged Product"; break;   // damaged
        case 2: cout << "Return Accepted: Wrong Item"; break;        // wrong item
        case 3: cout << "Return Accepted: Other Reason"; break;      // other
        default: cout << "Invalid return reason!";                   // wrong input
    }
    return 0;
}
