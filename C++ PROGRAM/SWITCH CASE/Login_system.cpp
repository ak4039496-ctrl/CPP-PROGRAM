/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Simple login system using switch case
Description: Checks role based on user input
*/

#include <iostream>
using namespace std;

int main() {
    int role;
    cout << "Enter role (1=Admin,2=Student,3=Guest): ";
    cin >> role;

    switch(role) {
        case 1: cout << "Access granted: Admin Panel"; break;
        case 2: cout << "Access granted: Student Dashboard"; break;
        case 3: cout << "Access granted: Guest Mode"; break;
        default: cout << "Access denied!";
    }
    return 0;
}
