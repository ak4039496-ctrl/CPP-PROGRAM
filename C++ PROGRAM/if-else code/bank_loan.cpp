/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if person is eligible for bank loan using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int salary;
    cout << "Enter monthly salary:- ";
    cin >> salary;

    if (salary >= 25000) {
        cout << "Eligible for Bank Loan." << endl;
    } else {
        cout << "Not eligible for Bank Loan." << endl;
    }

    return 0;
}
