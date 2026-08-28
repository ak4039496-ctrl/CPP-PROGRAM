/*
Author: Amit Gupta
Date: 22-Aug-2026
Smart banking system
*/

#include <iostream>
using namespace std;

int main() {
    int action; // banking action
    cout << "Enter action (1=Deposit,2=Withdraw,3=Balance):- ";
    cin >> action;

    double balance = 5000; // initial balance

    switch(action) {
        case 1: cout << "Deposit Successful"; break;   // deposit
        case 2: cout << "Withdraw Successful"; break;  // withdraw
        case 3: cout << "Balance => " << balance; break; // balance check
        default: cout << "Invalid action!";            // wrong input
    }
    return 0;
}
