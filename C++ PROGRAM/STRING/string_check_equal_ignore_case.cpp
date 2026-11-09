/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Compare strings ignoring case
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "hello";

    // Convert both to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 == str2) {
        cout << "Strings are equal (ignoring case)" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
