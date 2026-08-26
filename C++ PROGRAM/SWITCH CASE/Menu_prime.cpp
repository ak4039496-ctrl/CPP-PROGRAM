/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Prime check 
*/

#include <iostream>
using namespace std;

int main() {
    int choice, n;
    cout << "1. Prime Check\n2. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter number:- ";
            cin >> n;{
                int flag = 1;
                for(int i=2;i<n;i++) {
                    if(n%i==0){ 
                        flag=0; break; }
                }
                if(flag && n>1) cout << "Prime";
                else cout << "Not Prime";
            }
            break;
        case 2: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
