/*
Author: Amit Gupta
Date: 18-Aug-2026
Cyber login system 
*/

#include <iostream>
using namespace std;

int main() {
    int role; // role code
    cout << "Enter role (1=Admin,2=User,3=Guest):- ";
    cin >> role;

    switch(role) {
        case 1: cout << "Access: Admin Dashboard"; break;
        case 2: cout << "Access: User Panel"; break;
        case 3: cout << "Access: Guest Mode"; break;
        default: cout << "Access Denied!";
    }
    return 0;
}
