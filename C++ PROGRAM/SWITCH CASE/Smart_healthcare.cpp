/*
Author: Amit Gupta
Date: 22-Aug-2026
Smart healthcare monitoring
*/

#include <iostream>
using namespace std;

int main() {
    int dept; // department code
    cout << "Enter department (1=Cardiology,2=Neurology,3=Orthopedics):- ";
    cin >> dept;

    switch(dept) {
        case 1: cout << "Monitoring Cardiology Patients"; break;   // heart
        case 2: cout << "Monitoring Neurology Patients"; break;    // brain
        case 3: cout << "Monitoring Orthopedics Patients"; break;  // bones
        default: cout << "Invalid department!";                    // wrong input
    }
    return 0;
}
