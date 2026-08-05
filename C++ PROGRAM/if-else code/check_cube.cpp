/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a number is a perfect cube using if-else
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    int cubeRoot = round(cbrt(num));

    if (cubeRoot * cubeRoot * cubeRoot == num) {
        cout << num << " is a perfect cube." << endl;
    } else {
        cout << num << " is not a perfect cube." << endl;
    }

    return 0;
}
