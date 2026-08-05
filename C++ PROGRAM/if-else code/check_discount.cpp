/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if customer gets discount based on purchase amount using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter purchase amount:- ";
    cin >> amount;

    if (amount >= 1000) {
        cout << "Customer gets 10% discount." << endl;
    } else {
        cout << "No discount available." << endl;
    }

    return 0;
}
