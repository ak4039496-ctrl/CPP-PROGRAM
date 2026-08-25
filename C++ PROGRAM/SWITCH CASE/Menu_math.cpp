/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Math menu
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n;
    cout << "1. Square\n2. Cube\n3. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            cout << "Square => " << n*n;
            break;
        case 2:
            cout << "Enter number:- ";
            cin >> n;
            cout << "Cube => " << n*n*n;
            break;
        case 3: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
