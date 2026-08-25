/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Sum of even numbers
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n, sum=0;
    cout << "1. Sum of Even Numbers\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter limit:- ";
            cin >> n;
            for(int i=2;i<=n;i+=2)
            sum+=i;
            cout << "Sum => " << sum;
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
