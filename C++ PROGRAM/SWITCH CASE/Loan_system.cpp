/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Loan system using switch case
Description: Calculates interest rate based on loan type
*/

#include <iostream>
using namespace std;

int main() {
    int loan; // loan type code
    cout << "Enter loan type (1=Home,2=Car,3=Education): ";
    cin >> loan;

    switch(loan) {
        case 1: cout << "Home Loan Interest = 8%"; break;   // home loan
        case 2: cout << "Car Loan Interest = 10%"; break;   // car loan
        case 3: cout << "Education Loan Interest = 5%"; break; // education loan
        default: cout << "Invalid loan type!";
    }
    return 0;
}
