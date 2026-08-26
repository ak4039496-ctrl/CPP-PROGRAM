/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Shape Area Calculator 
*/

#include <iostream>
using namespace std;

int main() {
    int choice; // var declear
    cout << "1. Circle\n2. Square\n3. Rectangle\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double r;
            cout << "Enter radius:- "; // for input
            cin >> r;
            cout << "Circle Area => " << 3.1416 * r * r;
            break;
        }
        case 2: {
            double s;
            cout << "Enter side:- ";
            cin >> s;
            cout << "Square Area => " << s * s;
            break;
        }
        case 3: {
            double l, w;
            cout << "Enter length and width:- "; // rectangle
            cin >> l >> w;
            cout << "Rectangle Area => " << l * w;
            break;
        }
        default: cout << "Invalid choice!";
    }
    return 0;
}
