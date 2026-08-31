/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if string is empty
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:- ";
    getline(cin, str);

    if (str.empty()) {
        cout << "String is Empty." << endl;
    } else {
        cout << "String is not Empty." << endl;
    }

    return 0;
}
