/*
Author: Amit Gupta
Date: 09-08-2026
Program: Check mobile data usage warning using if-else
*/

#include <iostream>
using namespace std;

int main() {
    int data;
    cout << "Enter data used (in GB):- ";
    cin >> data;

    // Warning based on usage
    if (data < 5) {
        cout << "Data usage is Normal" << endl;
    } else if (data <= 10) {
        cout << "Data usage is High" << endl;
    } else {
        cout << "Data limit exceeded! Recharge required" << endl;
    }

    return 0;
}
