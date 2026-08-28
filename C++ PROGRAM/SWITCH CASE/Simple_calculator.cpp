/*
Author: Amit Gupta
Date: 22-Aug-2026
Simple calculator 
*/

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter two numbers:- ";
    cin >> a >> b;
    cout << "Enter operator (+,-,*,/):- ";
    cin >> op;

    switch(op) {
        case '+': cout << "Result => " << a+b; break;
        case '-': cout << "Result => " << a-b; break;
        case '*': cout << "Result => " << a*b; break;
        case '/': 
            if(b!=0) 
            cout << "Result => " << a/b;
            else cout << "Error: Division by zero!";
            break;
        default: cout << "Invalid operator";
    }
    return 0;
}
