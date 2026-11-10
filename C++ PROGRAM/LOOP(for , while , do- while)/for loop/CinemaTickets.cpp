/*
Author: Amit Gupta
Date: 16-08-2026
Program: Print cinema ticket numbers
*/

#include <iostream>
using namespace std;

int main() {
    int tickets;
    cout << "Enter number of tickets: ";
    cin >> tickets;

    for (int i = 1; i <= tickets; i++) {
        cout << "Cinema Ticket No: C" << i << endl;
    }
    return 0;
}
