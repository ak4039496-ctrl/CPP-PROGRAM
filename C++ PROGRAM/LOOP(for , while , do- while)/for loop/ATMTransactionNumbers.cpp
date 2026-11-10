/*
Author: Amit Gupta
Date: 16-08-2026
Program: Print transaction numbers in ATM
*/

#include <iostream>
using namespace std;

int main() {
    int transactions;
    cout << "Enter number of transactions:- ";
    cin >> transactions;

    for (int i = 1; i <= transactions; i++) {
        cout << "Transaction No: " << i << endl;
    }
    return 0;
}
