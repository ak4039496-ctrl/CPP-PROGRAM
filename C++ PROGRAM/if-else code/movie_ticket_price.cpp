/*
Author: Amit Gupta
Date: 09-08-2026
Calculate movie ticket price based on age 
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age:- ";
    cin >> age;

    if (age < 12) {
        cout << "Ticket Price => ₹100" << endl;
    } else if (age >= 60) {
        cout << "Ticket Price => ₹120 (Senior Citizen Discount)" << endl;
    } else {
        cout << "Ticket Price => ₹150" << endl;
    }

    return 0;
}
