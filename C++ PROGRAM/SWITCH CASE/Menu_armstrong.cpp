/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Armstrong check using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, sum=0, temp;
    cout << "1. Armstrong Check\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;
            temp = n;
            while(temp>0) {
                int d = temp%10;
                sum += d*d*d;
                temp /= 10;
            }
            if(sum==n) cout << "Armstrong";
            else cout << "Not Armstrong";
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
