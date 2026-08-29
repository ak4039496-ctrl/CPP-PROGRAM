/*
Author: Amit Gupta
Date: 22-Aug-2026
Student management system 
*/

#include <iostream>
using namespace std;

int main() {
    int option; // management option
    cout << "Enter option (1=Add Student,2=View Student,3=Delete Student):- ";
    cin >> option;

    switch(option) {
        case 1: cout << "Student Added Successfully"; break;   // add
        case 2: cout << "Viewing Student Details"; break;      // view
        case 3: cout << "Student Deleted Successfully"; break; // delete
        default: cout << "Invalid option!";                    // wrong input
    }
    return 0;
}
