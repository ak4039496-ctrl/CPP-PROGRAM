/*
Author: Amit Gupta
Date: 22-Aug-2026
Program: Railway enquiry system 
*/

#include <iostream>
using namespace std;

int main() {
    int status; // train status code
    cout << "Enter train status (1=On Time,2=Delayed,3=Cancelled):- ";
    cin >> status;

    switch(status) {
        case 1: cout << "Train is On Time"; break;
        case 2: cout << "Train is Delayed"; break;
        case 3: cout << "Train is Cancelled"; break;
        default: cout << "Invalid status!";
    }
    return 0;
}
