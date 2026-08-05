/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a number is a perfect square using if-else
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    int root = sqrt(num);

    if (root * root == num) {
        cout << num << " is a perfect square." << endl;
    } else {
        cout << num << " is not a perfect square." << endl;
    }

    return 0;
}
