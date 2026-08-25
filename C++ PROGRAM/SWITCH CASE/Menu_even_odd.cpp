/*
Author: Amit Gupta
Date: 18-Aug-2026
Even/Odd Checker 
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number:- ";
    cin >> n;

    switch(n % 2) {
        case 0: cout << "Even"; break;
        case 1: cout << "Odd"; break;
    }
    return 0;
}
