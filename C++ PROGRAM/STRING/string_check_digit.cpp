/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string contains digit
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello123";
    bool hasDigit = false;

    for (char c : str) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }

    if (hasDigit) {
        cout << "String contains digit" << endl;
    } else {
        cout << "No digit found" << endl;
    }

    return 0;
}
