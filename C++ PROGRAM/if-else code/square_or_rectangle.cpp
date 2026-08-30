/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check if given sides form a square or rectangle 
*/

#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter length and width:- ";
    cin >> length >> width;

    if (length == width) {
        cout << "It is a Square." << endl;
    } else {
        cout << "It is a Rectangle." << endl;
    }

    return 0;
}
