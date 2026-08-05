/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a number is a multiple of 15 using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    if (num % 15 == 0) {
        cout << num << " is a multiple of 15." << endl;
    } else {
        cout << num << " is not a multiple of 15." << endl;
    }

    return 0;
}
