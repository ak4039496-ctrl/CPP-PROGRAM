/*
Author: Amit Gupta
Date: 16-08-2026
Program: Print ticket numbers issued in a bus
*/

#include <iostream>
using namespace std;

int main() {
    int passengers;
    cout << "Enter number of passengers: ";
    cin >> passengers;

    for (int i = 1; i <= passengers; i++) {
        cout << "Ticket No: " << i << endl;
    }
    return 0;
}
