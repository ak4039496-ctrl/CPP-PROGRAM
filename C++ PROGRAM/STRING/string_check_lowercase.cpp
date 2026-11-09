/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string has lowercase letters
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HELLO";
    bool hasLower = false;

    for (char c : str) {
        if (islower(c)) {
            hasLower = true;
            break;
        }
    }

    if (hasLower) {
        cout << "String contains lowercase letters" << endl;
    } else {
        cout << "No lowercase letters found" << endl;
    }

    return 0;
}
