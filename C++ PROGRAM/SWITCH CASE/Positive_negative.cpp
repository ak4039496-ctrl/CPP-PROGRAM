/*
Author: Amit Gupta
Date: 21-Aug-2026
Program: Check if number is positive, negative or zero
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    switch(n > 0 ? 1 : (n < 0 ? -1 : 0)) {
        case 1: cout << "Positive"; break;
        case -1: cout << "Negative"; break;
        case 0: cout << "Zero"; break;
    }
    return 0;
}
