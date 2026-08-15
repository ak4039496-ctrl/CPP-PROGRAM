/*
Author: Amit Gupta
Date: 09-08-2026
Find the largest of two numbers
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
    if (a > b) {
        cout << a << " is larger than " << b << endl;
    } else if (b > a) {
        cout << b << " is larger than " << a << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
