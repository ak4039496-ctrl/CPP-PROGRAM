/*
Author: Amit Gupta
Date: 18-Aug-2026
Cyber intrusion detection 
*/

#include <iostream>
using namespace std;

int main() {
    int level; // intrusion level
    cout << "Enter level (1=Safe,2=Suspicious,3=Critical):- ";
    cin >> level;

    switch(level) {
        case 1: cout << "System Safe"; 
        break;           // safe
        case 2: cout << "Suspicious Activity Detected"; 
        break; // suspicious
        case 3: cout << "Critical Intrusion Detected"; 
        break;  // critical
        default: cout << "Invalid level!";              // wrong input
    }
    return 0;
}
