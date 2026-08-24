/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: Hospital management system 
*/

#include <iostream>
using namespace std;

int main() {
    int dept; // department code
    cout << "Enter department (1=Cardiology,2=Neurology,3=Orthopedics):- ";
    cin >> dept;

    switch(dept) {
        case 1: cout << "Cardiology Department"; break;   // heart care
        case 2: cout << "Neurology Department"; break;    // brain care
        case 3: cout << "Orthopedics Department"; break;  // bone care
        default: cout << "Invalid department!";           // wrong input
    }
    return 0;
}
