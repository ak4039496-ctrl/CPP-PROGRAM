/*
Author: Amit Gupta
Date: 09-08-2026
Calculate hospital checkup fee
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter patient age:- ";
    cin >> age;

    // Fee depends on age group
    if (age < 12) {
        cout << "Checkup Fee => ₹200 (Child)" << endl;
    } else if (age >= 60) {
        cout << "Checkup Fee => ₹150 (Senior Citizen Discount)" << endl;
    } else {
        cout << "Checkup Fee => ₹300 (Adult)" << endl;
    }

    return 0;
}
