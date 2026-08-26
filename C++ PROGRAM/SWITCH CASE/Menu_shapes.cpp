/*
Author: Amit Gupta
Date: 20-Aug-2026
Menu for shapes area 
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Circle\n2. Square\n3. Rectangle\nEnter choice:- ";
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
            double s;
            cout << "Enter side:- ";
            cin >> s;
            cout << "Area => " << s * s;
            break;
        }
        case 3: {
            double l, w;
            cout << "Enter length and width:- ";
            cin >> l >> w;
            cout << "Area => " << l * w;
            break;
        }
        default: cout << "Invalid choice";
    }
    return 0;
}
