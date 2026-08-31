/*
Author: Amit Gupta
Date: 19-08-2026
Program: Show train ticket price based on class
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter class (1=Sleeper, 2=AC, 3=First Class):- ";
    cin >> choice;

    // Ticket price depends on class
    if (choice == 1) {
        cout << "Ticket Price => ₹500 (Sleeper)" << endl;
    } else if (choice == 2) {
        cout << "Ticket Price => ₹1000 (AC)" << endl;
    } else if (choice == 3) {
        cout << "Ticket Price => ₹1500 (First Class)" << endl;
    } else {
        cout << "Invalid class selection." << endl;
    }

    return 0;
}
