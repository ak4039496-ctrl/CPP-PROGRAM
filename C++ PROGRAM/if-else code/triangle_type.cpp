/*
Author: Amit Gupta
Date: 27-08-2026
Program: Determine the type of triangle
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle:- ";
    cin >> a >> b >> c;

    // Check triangle type
    if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }

    return 0;
}
