/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if student passed or failed using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Result=> Pass" << endl;
    } else {
        cout << "Result=> Fail" << endl;
    }

    return 0;
}
