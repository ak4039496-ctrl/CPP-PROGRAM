/*
Author: Amit Gupta
Date: 09-08-2026
Find the largest of three numbers
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers:- ";
    cin >> a >> b >> c;

    // Nested if-else to find largest
    if (a >= b) {
        if (a >= c) {
            cout << a << " is the largest." << endl;
        } else {
            cout << c << " is the largest." << endl;
        }
    } else {
        if (b >= c) {
            cout << b << " is the largest." << endl;
        } else {
            cout << c << " is the largest." << endl;
        }
    }

    return 0;
}
