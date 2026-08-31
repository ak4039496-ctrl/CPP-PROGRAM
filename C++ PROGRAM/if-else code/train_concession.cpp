/*
Author: Amit Gupta
Date: 26-08-2026
Program: Check train ticket concession eligibility 
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter passenger age:- ";
    cin >> age;

    // Concession rules
    if (age < 12) {
        cout << "50% Concession (Child)" << endl;
    } else if (age >= 60) {
        cout << "40% Concession (Senior Citizen)" << endl;
    } else {
        cout << "No Concession" << endl;
    }

    return 0;
}
