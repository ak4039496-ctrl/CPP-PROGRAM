/*
Author: Amit Gupta
Date: 22-Aug-2026
Simple menu 
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Hello\n2. Bye\n3. Exit\nEnter choice:- ";
    cin >> choice;

    switch(choice) {
        case 1: cout << "Hello World"; break;
        case 2: cout << "Goodbye"; break;
        case 3: cout << "Exit"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
