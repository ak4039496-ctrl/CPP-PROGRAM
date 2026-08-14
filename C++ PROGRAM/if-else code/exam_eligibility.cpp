/*
Author: Amit Gupta
Date: 08-08-2026
Check if student is eligible for exam based on attendance
*/

#include <iostream>
using namespace std;

int main() {
    int attendance;
    cout << "Enter attendance percentage:- ";
    cin >> attendance;

    if (attendance >= 75) {
        cout << "Eligible to appear in exam" << endl;
    } else {
        cout << "Not eligible for exam (Short attendance)" << endl;
    }

    return 0;
}
