/*
Author: Amit Gupta
Date: 26-08-2026
Program: Compare two strings 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string:- ";
    cin >> s1;
    cout << "Enter second string:- ";
    cin >> s2;

    if (s1 == s2) {
        cout << "Strings are Equal." << endl;
    } else {
        cout << "Strings are Not Equal." << endl;
    }

    return 0;
}
