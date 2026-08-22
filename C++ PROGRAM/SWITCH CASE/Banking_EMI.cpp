/*
Author: Amit Gupta
Date: 18-Aug-2026
Banking EMI calculator 
*/

#include <iostream>
using namespace std;

int main() {
    int loan; // loan type
    cout << "Enter loan type (1=Home,2=Car,3=Education):- ";
    cin >> loan;

    switch(loan) {
        case 1: cout << "Home Loan EMI: 20 years";
        break;   // home loan
        case 2: cout << "Car Loan EMI: 5 years"; 
        break;     // car loan
        case 3: cout << "Education Loan EMI: 10 years"; 
        break; // education loan
        default: cout << "Invalid loan type!";              // wrong input
    }
    return 0;
}
