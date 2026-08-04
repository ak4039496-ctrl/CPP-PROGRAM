/*
Author: Amit Gupta
Date: 04-08-2026
Program: Check if a person is eligible to vote using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age:- ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to Vote" << endl;
    } else {
        cout << "Not Eligible to Vote" << endl;
    }

    return 0;
}
