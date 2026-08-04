/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a character is an alphabet 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an Alphabet." << endl;
    } else {
        cout << ch << " is not an Alphabet." << endl;
    }

    return 0;
}
