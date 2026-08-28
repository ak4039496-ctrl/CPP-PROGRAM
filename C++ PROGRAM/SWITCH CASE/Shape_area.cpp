/*
Author: Amit Gupta
Date: 22-Aug-2026
Calculate area of shapes
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Circle\n2. Rectangle\n3. Triangle\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1: {
            double r;
            cout << "Enter radius:- ";
            cin >> r;
            cout << "Area => " << 3.14 * r * r;
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length and width:- ";
            cin >> l >> w;
            cout << "Area => " << l * w;
            break;
        }
        case 3: {
            double b, h;
            cout << "Enter base and height:- ";
            cin >> b >> h;
            cout << "Area => " << 0.5 * b * h;
            break;
        }
        default: cout << "Invalid choice";
    }
    return 0;
}
