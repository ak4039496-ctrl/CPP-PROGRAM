/*
Author: Amit Gupta
Date: 16-08-2026
Program: Print seat numbers in a cinema hall
*/

#include <iostream>
using namespace std;

int main() {
    int seats;
    cout << "Enter total seats: ";
    cin >> seats;

    for (int i = 1; i <= seats; i++) {
        cout << "Seat No: " << i << endl;
    }
    return 0;
}
