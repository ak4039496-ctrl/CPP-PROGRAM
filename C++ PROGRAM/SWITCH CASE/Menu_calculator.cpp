/*
Author: Amit Gupta
Date: 18-Aug-2026
Professional Calculator 
*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    int choice;

    cout << "Enter two numbers:- ";
    cin >> a >> b;

    cout << "\n=== Calculator Menu ===\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Result => " << a + b; break;
        case 2: cout << "Result => " << a - b; break;
        case 3: cout << "Result => " << a * b; break;
        case 4: 
            if (b != 0) cout << "Result => " << a / b;
            else cout << "Error: Division by zero!";
            break;
        default: cout << "Invalid choice!";
    }
    return 0;
}
