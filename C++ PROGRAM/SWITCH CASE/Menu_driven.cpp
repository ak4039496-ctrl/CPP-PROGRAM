/*
Author: Amit Gupta
Date: 18-Aug-2026
Menu driven program
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice:- ";
    cin >> choice;

    double a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    switch(choice) {
        case 1: cout << "Sum => " << a+b; break;
        case 2: cout << "Difference => " << a-b; break;
        case 3: cout << "Product => " << a*b; break;
        case 4: cout << "Quotient => " << a/b; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
