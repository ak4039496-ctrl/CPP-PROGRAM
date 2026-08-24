/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: Healthcare monitoring system 
*/

#include <iostream>
using namespace std;

int main() {
    int dept; // healthcare department
    cout << "Enter department (1=Cardiology,2=Neurology,3=Orthopedics):- ";
    cin >> dept;

    switch(dept) {
        case 1: cout << "Monitoring: Cardiology"; break;   // heart
        case 2: cout << "Monitoring: Neurology"; break;    // brain
        case 3: cout << "Monitoring: Orthopedics"; break;  // bones
        default: cout << "Invalid department!";            // wrong input
    }
    return 0;
}
