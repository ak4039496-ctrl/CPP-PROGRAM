/*
Author: Amit Gupta
Date: 18-Aug-2026
Attendance manager */

#include <iostream>
using namespace std;

int main() {
    int status; // attendance status
    cout << "Enter status (1=Present,2=Absent,3=Late):- ";
    cin >> status;

    switch(status) {
        case 1: cout << "Marked: Present";
        break;   // present
        case 2: cout << "Marked: Absent"; 
        break;    // absent
        case 3: cout << "Marked: Late"; 
        break;      // late
        default: cout << "Invalid status!";         // wrong input
    }
    return 0;
}
