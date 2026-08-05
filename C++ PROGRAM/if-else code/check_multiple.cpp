/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if one number is a multiple of another using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    if (b != 0 && a % b == 0) {
        cout << a << " is a multiple of " << b << endl;
    } else {
        cout << a << " is not a multiple of " << b << endl;
    }

    return 0;
}
