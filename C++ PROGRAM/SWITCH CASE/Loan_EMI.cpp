/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Loan EMI calculator using switch case
Description: Shows EMI duration based on loan type
*/

#include <iostream>
using namespace std;

int main() {
    int loan; // loan type
    cout << "Enter loan type (1=Home,2=Car,3=Education): ";
    cin >> loan;

    switch(loan) {
        case 1: cout << "Home Loan EMI: 20 years"; break;
        case 2: cout << "Car Loan EMI: 5 years"; break;
        case 3: cout << "Education Loan EMI: 10 years"; break;
        default: cout << "Invalid loan type!";
    }
    return 0;
}
