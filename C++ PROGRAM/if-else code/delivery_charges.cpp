/*
Author: Amit Gupta
Date: 08-08-2026
Calculate delivery charges based on order amount 
*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter order amount:- ";
    cin >> amount;

    if (amount >= 500) {
        cout << "Free Delivery." << endl;
    } else {
        cout << "Delivery Charges => ₹50" << endl;
    }

    return 0;
}
