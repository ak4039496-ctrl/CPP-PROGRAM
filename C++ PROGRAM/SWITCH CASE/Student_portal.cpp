/*
Author: Amit Gupta
Date: 22-Aug-2026
Program: Student portal 
*/

#include <iostream>
using namespace std;

int main() {
    int section; // portal section
    cout << "Enter section (1=Results,2=Attendance,3=Fees):- ";
    cin >> section;

    switch(section) {
        case 1: cout << "Opening Results Section"; break;
        case 2: cout << "Opening Attendance Section"; break;
        case 3: cout << "Opening Fees Section"; break;
        default: cout << "Invalid Section!";
    }
    return 0;
}
