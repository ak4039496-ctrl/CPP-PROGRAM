/*
Author: Amit Gupta
Date: 08-08-2026
Program: Assign grade based on marks using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade=> A+" << endl;
    } else if (marks >= 75) {
        cout << "Grade=> A" << endl;
    } else if (marks >= 60) {
        cout << "Grade=> B" << endl;
    } else if (marks >= 40) {
        cout << "Grade=> C" << endl;
    } else {
        cout << "Grade=> F (Fail)" << endl;
    }

    return 0;
}
