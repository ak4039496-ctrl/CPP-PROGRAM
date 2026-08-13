/*
Author: Amit Gupta
Date: 08-08-2026
Check if a character is whitespace 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> noskipws >> ch; // noskipws allows whitespace input

    if (ch == ' ' || ch == '\t' || ch == '\n') {
        cout << "Character is Whitespace" << endl;
    } else {
        cout << "Character is not Whitespace" << endl;
    }

    return 0;
}
