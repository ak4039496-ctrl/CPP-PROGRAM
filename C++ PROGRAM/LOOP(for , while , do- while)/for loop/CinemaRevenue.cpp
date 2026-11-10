/*
Author: Amit Gupta
Date: 16-08-2026
Program: Calculate cinema revenue from N tickets
*/

#include <iostream>
using namespace std;

int main() {
    int tickets;
    cout << "Enter number of tickets sold: ";
    cin >> tickets;

    double price, total = 0;
    for (int i = 1; i <= tickets; i++) {
        cout << "Enter price of ticket " << i << ": ";
        cin >> price;
        total += price;
    }
    cout << "Total Cinema Revenue = Rs. " << total << endl;
    return 0;
}
