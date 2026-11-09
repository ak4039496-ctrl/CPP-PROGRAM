/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string contains only alphabets
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HelloWorld";
    bool onlyAlpha = true;

    for (char c : str) {
        if (!isalpha(c)) {
            onlyAlpha = false;
            break;
        }
    }

    if (onlyAlpha) {
        cout << "String has only alphabets" << endl;
    } else {
        cout << "String has other characters too" << endl;
    }

    return 0;
}
