/*
Author: Amit Gupta
Date: 09-08-2026
Program: Check flight ticket rules based on baggage weight using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int weight;
    cout << "Enter baggage weight (kg):- ";
    cin >> weight;

    // Rules based on baggage weight
    if (weight <= 15) {
        cout << "No extra charges" << endl;
    } else if (weight <= 25) {
        cout << "Extra Charges => ₹50" << endl;
    } else {
        cout << "Extra Charges => ₹100 (Overweight)" << endl;
    }

    return 0;
}
