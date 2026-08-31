/*
Author: Amit Gupta
Date: 10-08-2026
Program: Check if student is eligible for scholarship 
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    if (marks >= 85) {
        cout << "Eligible for Scholarship." << endl;
    } else {
        cout << "Not eligible for Scholarship." << endl;
    }

    return 0;
}
