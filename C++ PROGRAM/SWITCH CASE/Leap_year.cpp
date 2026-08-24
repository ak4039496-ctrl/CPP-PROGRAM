/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: Check leap year 
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year:- ";
    cin >> year;

    switch((year%400==0) || (year%4==0 && year%100!=0)) {
        case 1: cout << "Leap Year"; 
        break;
        case 0: cout << "Not Leap Year"; 
        break;
    }
    return 0;
}
