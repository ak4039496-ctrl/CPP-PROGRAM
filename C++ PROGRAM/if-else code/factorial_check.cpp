/*
Author: Amit Gupta
Date: 09-08-2026
Calculate factorial of a number
*/

#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter a number:- ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial not defined for negative numbers" << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is " << fact << endl;
    }

    return 0;
}
