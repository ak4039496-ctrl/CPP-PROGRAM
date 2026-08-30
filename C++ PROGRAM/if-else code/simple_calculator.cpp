/*
Author: Amit Gupta
Date: 24-08-2026
Program: Simple calculator using 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers:- ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /):-  ";
    cin >> op;

    // Perform operation using if-else
    if (op == '+') {
        cout << "Result => " << a + b << endl;
    } else if (op == '-') {
        cout << "Result => " << a - b << endl;
    } else if (op == '*') {
        cout << "Result => " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result => " << a / b << endl;
        } else {
            cout << "Division by zero not allowed." << endl;
        }
    } else {
        cout << "Invalid operator." << endl;
    }

    return 0;
}
