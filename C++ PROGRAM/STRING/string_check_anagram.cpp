/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if two strings are anagrams
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Strings are anagrams" << endl;
    } else {
        cout << "Strings are not anagrams" << endl;
    }

    return 0;
}
