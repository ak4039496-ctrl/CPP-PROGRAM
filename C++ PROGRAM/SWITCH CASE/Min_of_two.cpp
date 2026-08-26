/*
Author: Amit Gupta
Date: 20-Aug-2026
Program: Find minimum of two numbers 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    switch(a < b) {
        case 1: cout << "Min => " << a; 
        break;
        case 0: cout << "Min => " << b; 
        break;
    }
    return 0;
}
