/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if first and last character of string are same using if-else
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (!str.empty() && str.front() == str.back()) {
        cout << "First and Last characters are Same." << endl;
    } else {
        cout << "First and Last characters are Different." << endl;
    }

    return 0;
}
