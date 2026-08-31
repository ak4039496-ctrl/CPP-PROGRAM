/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if length of string is greater than 5
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:- ";
    cin >> str;

    if (str.length() > 5) {
        cout << "Length of string is greater than 5." << endl;
    } else {
        cout << "Length of string is 5 or less." << endl;
    }

    return 0;
}
