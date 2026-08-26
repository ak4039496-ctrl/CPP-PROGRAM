/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Palindrome check
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, rev=0, temp;
    cout << "1. Palindrome Check\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            temp = n;
            while(temp>0) {
                rev = rev*10 + temp%10;
                temp /= 10;
            }
            if(rev==n) cout << "Palindrome";
            else cout << "Not Palindrome";
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
