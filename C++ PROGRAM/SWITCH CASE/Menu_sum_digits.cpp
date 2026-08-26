/*
Author: Amit Gupta
Date: 20-Aug-2026
Program: Sum of digits 
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, sum=0;
    cout << "1. Sum of Digits\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            while(n>0) {
                sum += n%10;
                n /= 10;
            }
            cout << "Sum => " << sum;
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
