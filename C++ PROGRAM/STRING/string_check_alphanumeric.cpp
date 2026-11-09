/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string is alphanumeric
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello123";
    bool isAlnum = true;

    for (char c : str) {
        if (!isalnum(c)) {
            isAlnum = false;
            break;
        }
    }

    if (isAlnum) {
        cout << "String is alphanumeric" << endl;
    } else {
        cout << "String is not alphanumeric" << endl;
    }

    return 0;
}
