/*
Author: Amit Gupta
Date: 16-08-2026
Program: Calculate cinema snacks revenue
*/

#include <iostream>
using namespace std;

int main() {
    int customers;
    cout << "Enter number of customers: ";
    cin >> customers;

    double snacks, total = 0;
    for (int i = 1; i <= customers; i++) {
        cout << "Enter snack bill for customer " << i << ": ";
        cin >> snacks;
        total += snacks;
    }
    cout << "Total Snacks Revenue = Rs. " << total << endl;
    return 0;
}
