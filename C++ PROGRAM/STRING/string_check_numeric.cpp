/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string is numeric
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "12345";
    bool isNumeric = true;

    for (char c : str) {
        if (!isdigit(c)) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        cout << "String is numeric" << endl;
    } else {
        cout << "String is not numeric" << endl;
    }

    return 0;
}
