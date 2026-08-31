/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if first character of string is uppercase 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:- ";
    cin >> str;

    if (!str.empty() && str[0] >= 'A' && str[0] <= 'Z') {
        cout << "First character is Uppercase." << endl;
    } else {
        cout << "First character is not Uppercase." << endl;
    }

    return 0;
}
