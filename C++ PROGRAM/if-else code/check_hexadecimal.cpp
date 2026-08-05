/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a character is a valid hexadecimal digit using if-else
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f')) {
        cout << ch << " is a Hexadecimal Digit." << endl;
    } else {
        cout << ch << " is not a Hexadecimal Digit." << endl;
    }

    return 0;
}
