/*
Author: Amit Gupta
Date: 09-08-2026
Find maximum and minimum of two numbers */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    if (a > b) {
        cout << "Maximum => " << a << ", Minimum => " << b << endl;
    } else if (b > a) {
        cout << "Maximum => " << b << ", Minimum => " << a << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
