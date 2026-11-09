/* 
Author: Amit Gupta
Date: 07-10-2026
Program: Check if string is isogram (no repeating letters)
*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string str = "machine";
    set<char> seen;
    bool isIsogram = true;

    for (char c : str) {
        if (seen.find(c) != seen.end()) {
            isIsogram = false;
            break;
        }
        seen.insert(c);
    }

    if (isIsogram) {
        cout << "String is an isogram" << endl;
    } else {
        cout << "String is not an isogram" << endl;
    }

    return 0;
}
