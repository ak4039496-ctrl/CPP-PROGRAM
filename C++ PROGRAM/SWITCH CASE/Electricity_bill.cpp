/*
Author: Amit Gupta
Date: 18-Aug-2026
Electricity bill calculator 
*/

#include <iostream>
using namespace std;

int main() {
    int category; // usage category
    cout << "Enter category (1=Domestic,2=Commercial,3=Industrial):- ";
    cin >> category;

    switch(category) {
        case 1: 
        cout << "Rate => Rs. 5 per unit"; break;   // domestic
        case 2: 
        cout << "Rate => Rs. 8 per unit"; break;   // commercial
        case 3: 
        cout << "Rate => Rs. 12 per unit"; break;  // industrial
        default: cout << "Invalid category!";
    }
    return 0;
}
