/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a character is a digit
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    } else {
        cout << ch << " is not a Digit." << endl;
    }

    return 0;
}
