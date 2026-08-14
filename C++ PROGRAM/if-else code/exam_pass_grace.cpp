/*
Author: Amit Gupta
Date: 08-08-2026
Check if student passes with grace marks
*/

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    // Pass condition with grace marks
    if (marks >= 40) {
        cout << "Result=> Pass" << endl;
    } else if (marks >= 35 && marks < 40) {
        cout << "Result=> Pass with Grace Marks" << endl;
    } else {
        cout << "Result=> Fail" << endl;
    }

    return 0;
}
