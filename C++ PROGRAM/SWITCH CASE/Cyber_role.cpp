/*
Author: Amit Gupta
Date: 18-Aug-2026
*/

#include <iostream>
using namespace std;

int main() {
    int role; // role code
    cout << "Enter role (1=Analyst,2=PenTester,3=Admin):- ";
    cin >> role;

    switch(role) {
        case 1: cout << "Access: Security Logs"; break;       // analyst
        case 2: cout << "Access: Vulnerability Scanner"; break; // pentester
        case 3: cout << "Access: Full System Control"; break; // admin
        default: cout << "Access Denied!";
    }
    return 0;
}
