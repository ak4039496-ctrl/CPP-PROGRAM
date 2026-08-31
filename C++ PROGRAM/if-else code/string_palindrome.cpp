/*
Author: Amit Gupta
Date: 25-08-2026
Program: Check if a string is palindrome 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev;
    cout << "Enter a string:- ";
    cin >> str;

    // Reverse string
    rev = string(str.rbegin(), str.rend());

    if (str == rev) {
        cout << str << " is a Palindrome." << endl;
    } else {
        cout << str << " is not a Palindrome." << endl;
    }

    return 0;
}
