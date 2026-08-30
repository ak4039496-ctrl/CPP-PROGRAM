/*
Author: Amit Gupta
Date: 24-08-2026
Check if student passed or failed
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    // Pass/Fail condition
    if (marks >= 40) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}
