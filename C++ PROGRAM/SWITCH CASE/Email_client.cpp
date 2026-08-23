/*
Author: Amit Gupta
Date: 18-Aug-2026
Email client simulation 
*/

#include <iostream>
using namespace std;

int main() {
    int action; // email action code
    cout << "Enter action (1=Compose,2=Inbox,3=Sent):- ";
    cin >> action;

    switch(action) {
        case 1: cout << "Opening Compose Window"; break;
        case 2: cout << "Opening Inbox"; break;
        case 3: cout << "Opening Sent Items"; break;
        default: cout << "Invalid action!";
    }
    return 0;
}
