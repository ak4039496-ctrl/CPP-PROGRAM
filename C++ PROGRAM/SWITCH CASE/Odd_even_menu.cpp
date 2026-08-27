/*
Author: Amit Gupta
Date: 21-Aug-2026
Menu driven odd/even check 
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n;
    cout << "1. Check Odd/Even\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            switch(n % 2) {
                case 0: cout << "Even"; break;
                case 1: cout << "Odd"; break;
            }
            break;
        case 2: 
        cout << "Exit"; 
        break;
        default: 
        cout << "Invalid choice";
    }
    return 0;
}
