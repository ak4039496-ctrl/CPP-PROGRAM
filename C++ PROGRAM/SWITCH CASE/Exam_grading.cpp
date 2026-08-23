/*
Author: Amit Gupta
Date: 18-Aug-2026
*/

#include <iostream>
using namespace std;

int main() {
    int marks; // student marks
    cout << "Enter marks (0-100):- ";
    cin >> marks;

    switch(marks/10) {
        case 10: case 9: cout << "Grade = A+"; break; // 90-100
        case 8: cout << "Grade = A"; break;           // 80-89
        case 7: cout << "Grade = B"; break;           // 70-79
        case 6: cout << "Grade = C"; break;           // 60-69
        case 5: cout << "Grade = D"; break;           // 50-59
        default: cout << "Grade = F";                 // below 50
    }
    return 0;
}
