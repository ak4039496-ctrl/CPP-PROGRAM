/*
Author: Amit Gupta
Date: 18-Aug-2026
ATM Machine simulation

*/

#include <iostream>
using namespace std;

int main() {
    double balance = 5000;   // initial balance
    int choice;              // user choice

    cout << "Enter choice (1=Deposit,2=Withdraw,3=Balance):- ";
    cin >> choice;

    switch(choice) {
        case 1: { // deposit
            double amt;
            cout << "Enter deposit amount:- ";
            cin >> amt;
            balance += amt;  // add to balance
            cout << "Updated Balance => " << balance;
            break;
        }
        case 2: { // withdraw
            double amt;
            cout << "Enter withdraw amount:- ";
            cin >> amt;
            if(amt <= balance) {
                balance -= amt;  // subtract from balance
                cout << "Updated Balance => " << balance;
            } else {
                cout << "Error: Insufficient funds!";
            }
            break;
        }
        case 3: // balance check
            cout << "Current Balance => " << balance;
            break;
        default:
            cout << "Invalid choice!";
    }
    return 0;
}
