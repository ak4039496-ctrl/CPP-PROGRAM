/*
Author: Amit Gupta
Date: 16-08-2026
Program: Calculate final balance after N deposits
*/

#include <iostream>
using namespace std;

int main() {
    int deposits;
    cout << "Enter number of deposits: ";
    cin >> deposits;

    double amount, balance = 0;
    for (int i = 1; i <= deposits; i++) {
        cout << "Enter deposit amount " << i << ": ";
        cin >> amount;
        balance += amount;
    }
    cout << "Final Balance => Rs. " << balance << endl;
    return 0;
}
