/*
Author: Amit Gupta
Date: 25-08-2026
Program: Calculate shopping discount based on purchase amount 
*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter shopping amount:- ";
    cin >> amount;

    if (amount >= 5000) {
        cout << "Discount => 20%" << endl;
    } else if (amount >= 2000) {
        cout << "Discount => 10%" << endl;
    } else if (amount >= 1000) {
        cout << "Discount => 5%" << endl;
    } else {
        cout << "No discount available." << endl;
    }

    return 0;
}
