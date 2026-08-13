/*
Author: Amit Gupta
Date: 08-08-2026
Program: Check if a number is divisible by 5
*/
#include <iostream>
using namespace std;

int main() {
    int num;

    // Input a number from user
    cout << "Enter a number:- ";
    cin >> num;

    // Check divisibility by 5
    if (num % 5 == 0) {
        cout << num << " is divisible by 5." << endl;
    } else {
        cout << num << " is not divisible by 5." << endl;
    }

    return 0;
}
