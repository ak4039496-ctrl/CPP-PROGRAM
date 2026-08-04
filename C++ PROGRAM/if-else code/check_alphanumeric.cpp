/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a character is alphanumeric using if-else
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        cout << ch << " is Alphanumeric" << endl;
    } else {
        cout << ch << " is not Alphanumeric" << endl;
    }

    return 0;
}
