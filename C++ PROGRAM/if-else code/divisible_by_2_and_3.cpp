/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a number is divisible by both 2 and 3 
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0 && num % 3 == 0) {
        cout << num << " is divisible by both 2 and 3." << endl;
    } else {
        cout << num << " is not divisible by both 2 and 3." << endl;
    }

    return 0;
}
