/*
Author: Amit Gupta
Date: 18-Aug-2026
Exam system using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int exam; // variable for exam type
    cout << "Enter exam type (1=Online,2=Offline,3=Practical):- ";
    cin >> exam;

    switch(exam) {
        case 1: cout << "Exam Mode: Online"; break;    // online exam
        case 2: cout << "Exam Mode: Offline"; break;   // offline exam
        case 3: cout << "Exam Mode: Practical"; break; // practical exam
        default: cout << "Invalid exam type!";         // wrong input
    }
    return 0;
}
