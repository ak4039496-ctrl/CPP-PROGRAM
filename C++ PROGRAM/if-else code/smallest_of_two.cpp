/*
Author: Amit Gupta
Date: 25-08-2026
Program: Find the smallest of two numbers 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers from user
    cout << "Enter first number:- ";
    cin >> a;
    cout << "Enter second number:- ";
    cin >> b;

    // Compare the two numbers using if-else
    if (a < b) {
        cout << a << " is smaller than " << b << endl;
    } else if (b < a) {
        cout << b << " is smaller than " << a << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
