/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if a character is vowel or consonant 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character:- ";
    cin >> ch;

    // Convert to lowercase for uniform check
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a Vowel." << endl;
    } else {
        cout << ch << " is a Consonant." << endl;
    }

    return 0;
}
