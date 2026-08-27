/*
Author: Amit Gupta
Date: 22-Aug-2026
Online exam system
*/

#include <iostream>
using namespace std;

int main() {
    int exam; // exam type code
    cout << "Enter exam type (1=MCQ,2=Written,3=Practical):- ";
    cin >> exam;

    switch(exam) {
        case 1: cout << "Exam Type: Multiple Choice Questions"; break;
        case 2: cout << "Exam Type: Written Test"; break;
        case 3: cout << "Exam Type: Practical Lab"; break;
        default: cout << "Invalid exam type!";
    }
    return 0;
}
