/*
Author: Amit Gupta
Date: 21-08-2026
Check if a number is positive, negative, or zero
*/
#include <iostream>
using namespace std;

int main() {
    int num;

    // Input from user
    cout << "Enter a number:- ";
    cin >> num;

    // Check if number is positive, negative, or zero
    if (num > 0) {
        cout << num << " is Positive." << endl;
    } else if (num < 0) {
        cout << num << " is Negative." << endl;
    } else {
        cout << "The number is Zero." << endl;
    }

    return 0;
}
