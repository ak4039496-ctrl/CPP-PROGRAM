/*
Author: Amit Gupta
Date: 18-Aug-2026
Find maximum of two numbers 
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers:- ";
    cin >> a >> b;

    switch(a > b) {
        case 1: cout << "Max => " << a; break;
        case 0: cout << "Max => " << b; break;
    }
    return 0;
}
