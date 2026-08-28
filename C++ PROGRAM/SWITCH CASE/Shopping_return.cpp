/*
Author: Amit Gupta
Date: 22-Aug-2026
Shopping return system 
*/

#include <iostream>
using namespace std;

int main() {
    int reason; // return reason
    cout << "Enter reason (1=Damaged,2=Wrong Item,3=Other):- ";
    cin >> reason;

    switch(reason) {
        case 1: cout << "Return Accepted: Damaged"; break;   // damaged
        case 2: cout << "Return Accepted: Wrong Item"; break; // wrong item
        case 3: cout << "Return Accepted: Other"; break;      // other
        default: cout << "Invalid reason!";                   // wrong input
    }
    return 0;
}
