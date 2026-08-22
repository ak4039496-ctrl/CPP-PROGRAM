/*
Author: Amit Gupta
Date: 18-Aug-2026
Bank transaction system 
Handles deposit, withdraw, and balance enquiry
*/

#include <iostream>
using namespace std;

int main() {
    double balance = 2000; // initial balance
    int action;            // transaction type

    cout << "Enter action (1=Deposit,2=Withdraw,3=Balance):- ";
    cin >> action;

    switch(action) {
        case 1: { // deposit
            double amt;
            cout << "Enter deposit amount:- ";
            cin >> amt;
            balance += amt;
            cout << "Updated Balance => " << balance;
            break;
        }
        case 2: { // withdraw
            double amt;
            cout << "Enter withdraw amount:- ";
            cin >> amt;
            if(amt <= balance) {
                balance -= amt;
                cout << "Updated Balance => " << balance;
            } else {
                cout << "Error: Insufficient funds";
            }
            break;
        }
        case 3: cout << "Current Balance => " << balance; break;
        default: cout << "Invalid action!";
    }
    return 0;
}
