/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Reverse number 
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, rev=0;
    cout << "1. Reverse Number\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            while(n>0) {
                rev = rev*10 + n%10;
                n /= 10;
            }
            cout << "Reversed => " << rev;
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
