/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a digit is even or odd using if-else
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a digit (0-9):- ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        int num = ch - '0'; // convert char to int
        if (num % 2 == 0) {
            cout << num << " is Even Digit." << endl;
        } else {
            cout << num << " is Odd Digit." << endl;
        }
    } else {
        cout << ch << " is not a Digit." << endl;
    }

    return 0;
}
