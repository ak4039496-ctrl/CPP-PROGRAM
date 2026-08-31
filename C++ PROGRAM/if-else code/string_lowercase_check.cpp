/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if first character of string is lowercase */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:- ";
    cin >> str;

    if (!str.empty() && str[0] >= 'a' && str[0] <= 'z') {
        cout << "First character is Lowercase." << endl;
    } else {
        cout << "First character is not Lowercase." << endl;
    }

    return 0;
}
