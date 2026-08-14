/*
Author: Amit Gupta
Date: 08-08-2026
Allocate exam hall based on roll number 
*/

#include <iostream>
using namespace std;

int main() {
    int roll;
    cout << "Enter roll number:- ";
    cin >> roll;

    // Seating allocation based on roll number range
    if (roll >= 1 && roll <= 50) {
        cout << "Allocated: Hall A" << endl;
    } else if (roll >= 51 && roll <= 100) {
        cout << "Allocated: Hall B" << endl;
    } else if (roll >= 101 && roll <= 150) {
        cout << "Allocated: Hall C" << endl;
    } else {
        cout << "Invalid roll number" << endl;
    }

    return 0;
}
