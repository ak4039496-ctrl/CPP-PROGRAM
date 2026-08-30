/*
Author: Amit Gupta
Date: 23-08-2026
Check if sum of two numbers is positive or negative 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    int sum = a + b;

    if (sum > 0) {
        cout << "Sum => " << sum << " is Positive." << endl;
    } else if (sum < 0) {
        cout << "Sum => " << sum << " is Negative." << endl;
    } else {
        cout << "Sum => 0" << endl;
    }

    return 0;
}
