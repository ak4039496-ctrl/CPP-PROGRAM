/*
Author: Amit Gupta
Date: 04-08-2026
Program: Calculate area of a rectangle
*/

#include <iostream>
using namespace std;

int main() {
    float length, width;
    cout << "Enter length and width:- ";
    cin >> length >> width;

    if (length > 0 && width > 0) {
        cout << "Area of Rectangle = " << length * width << endl;
    } else {
        cout << "Invalid dimensions." << endl;
    }

    return 0;
}
