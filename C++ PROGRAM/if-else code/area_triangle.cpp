
/*
Author: Amit Gupta
Date: 04-08-2026
Program: Calculate area of a triangle using if-else
*/

#include <iostream>
using namespace std;

int main() {
    float base, height;
    cout << "Enter base and height:- ";
    cin >> base >> height;

    if (base > 0 && height > 0) {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    } else {
        cout << "Invalid dimensions." << endl;
    }

    return 0;
}
