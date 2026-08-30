/*
Author: Amit Gupta
Date: 24-08-2026
Program: Calculate salary bonus based on years of service*/

#include <iostream>
using namespace std;

int main() {
    int salary, years;
    cout << "Enter current salary:- ";
    cin >> salary;
    cout << "Enter years of service:- ";
    cin >> years;

    // Bonus condition
    if (years > 5) {
        cout << "Bonus: " << salary * 0.05 << endl;
    } else {
        cout << "No bonus awarded." << endl;
    }

    return 0;
}
