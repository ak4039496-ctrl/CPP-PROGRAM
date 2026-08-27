/*
Author: Amit Gupta
Date: 21-Aug-2026
Program: Payroll calculator
*/

#include <iostream>
using namespace std;

int main() {
    int emp; // employee type
    cout << "Enter employee type (1=Manager,2=Developer,3=Intern):- ";
    cin >> emp;

    switch(emp) {
        case 1: cout << "Manager Salary => Rs. 80,000"; break;   // manager
        case 2: cout << "Developer Salary => Rs. 50,000"; break; // developer
        case 3: cout << "Intern Stipend => Rs. 10,000"; break;   // intern
        default: cout << "Invalid employee type!";              // wrong input
    }
    return 0;
}
