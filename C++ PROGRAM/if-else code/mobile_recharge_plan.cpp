/*
Author: Amit Gupta
Date: 09-08-2026
Suggest mobile recharge plan based on amount 
*/

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter recharge amount:- ";
    cin >> amount;

    if (amount >= 500) {
        cout << "Plan: Unlimited Calls + 2GB/day for 84 days." << endl;
    } else if (amount >= 300) {
        cout << "Plan: Unlimited Calls + 1.5GB/day for 56 days." << endl;
    } else if (amount >= 150) {
        cout << "Plan: Unlimited Calls + 1GB/day for 28 days." << endl;
    } else {
        cout << "Plan: Talktime only." << endl;
    }

    return 0;
}
