/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Factorial using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, fact = 1;
    cout << "1. Factorial\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            for(int i=1;i<=n;i++) 
            fact *= i;
            cout << "Factorial => " << fact;
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
