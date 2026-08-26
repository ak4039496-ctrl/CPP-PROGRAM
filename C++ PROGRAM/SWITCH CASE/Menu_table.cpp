/*
Author: Amit Gupta
Date: 20-Aug-2026
Program: Multiplication table
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n;
    cout << "1. Multiplication Table\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            for(int i=1;i<=10;i++) 
            cout << n << " x " << i << " = " << n*i << endl;
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
