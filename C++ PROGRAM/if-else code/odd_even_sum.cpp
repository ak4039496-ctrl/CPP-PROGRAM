/*
Author: Amit Gupta
Date: 09-08-2026
Check if sum of two numbers is odd or even 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    int sum = a + b;

    if (sum % 2 == 0) {
        cout << "Sum => " << sum << " is Even." << endl;
    } else {
        cout << "Sum => " << sum << " is Odd." << endl;
    }

    return 0;
}
