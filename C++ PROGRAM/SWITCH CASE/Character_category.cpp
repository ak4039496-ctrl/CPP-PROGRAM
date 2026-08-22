/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Identify character type using switch case
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter character:- ";
    cin >> ch;

    switch(isalpha(ch) ? 1 : (isdigit(ch) ? 2 : 3)) {
        case 1: cout << "Alphabet"; break;
        case 2: cout << "Digit"; break;
        case 3: cout << "Special character"; break;
    }
    return 0;
}
