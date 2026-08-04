/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if ATM withdrawal is valid using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int balance, withdraw;
    cout << "Enter account balance:- ";
    cin >> balance;
    cout << "Enter withdrawal amount:- ";
    cin >> withdraw;

    if (withdraw <= balance && withdraw % 100 == 0) {
        cout << "Withdrawal Successful. Remaining Balance = " << balance - withdraw << endl;
    } else if (withdraw % 100 != 0) {
        cout << "Avlable only  100₹ note" << endl;
    } else {
        cout << "Insufficient Balance." << endl;
    }

    return 0;
}
