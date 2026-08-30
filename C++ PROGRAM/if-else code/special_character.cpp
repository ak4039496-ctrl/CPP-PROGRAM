/*
Author: Amit Gupta
Date: 25-08-2026
Program: Check if a character is a special character 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
        cout << ch << " is not a Special Character." << endl;
    } else {
        cout << ch << " is a Special Character." << endl;
    }

    return 0;
}
