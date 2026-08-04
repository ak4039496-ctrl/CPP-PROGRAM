/*
Author: Amit Gupta
Date: 04-08-2026
Program: Calculate area of a circle
*/

#include <iostream>
using namespace std;

int main() {
    float radius;
    cout << "Enter radius:- ";
    cin >> radius;

    if (radius > 0) {
        cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
    } else {
        cout << "Invalid radius." << endl;
    }

    return 0;
}
