/*
Author: Amit Gupta
Date: 04-08-2026
Program: Calculate bus fare based on age using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter passenger age:- ";
    cin >> age;

    if (age < 5) {
        cout << "Bus Fare => Free" << endl;
    } else if (age <= 18) {
        cout << "Bus Fare => ₹20" << endl;
    } else if (age >= 60) {
        cout << "Bus Fare => ₹15 (Senior Discount)" << endl;
    } else {
        cout << "Bus Fare => ₹30" << endl;
    }

    return 0;
}
