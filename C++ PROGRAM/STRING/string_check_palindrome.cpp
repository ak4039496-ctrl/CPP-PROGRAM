/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check palindrome string (user input)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev) {
        cout << "Palindrome string" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
