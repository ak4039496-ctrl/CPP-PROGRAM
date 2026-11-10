/*
Author: Amit Gupta
Date: 16-08-2026
Program: Calculate total bus fare collected from N passengers
*/

#include <iostream>
using namespace std;

int main() {
    int passengers;
    cout << "Enter number of passengers: ";
    cin >> passengers;

    double fare, total = 0;
    for (int i = 1; i <= passengers; i++) {
        cout << "Enter fare paid by passenger " << i << ": ";
        cin >> fare;
        total += fare;
    }
    cout << "Total Bus Fare Collected => Rs. " << total << endl;
    return 0;
}
