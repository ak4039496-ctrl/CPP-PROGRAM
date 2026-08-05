/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a number is greater than 100 using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    if (num > 100) {
        cout << num << " is greater than 100." << endl;
    } else {
        cout << num << " is not greater than 100." << endl;
    }

    return 0;
}
