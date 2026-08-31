/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if a character is uppercase or lowercase 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is Uppercase." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is Lowercase." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
