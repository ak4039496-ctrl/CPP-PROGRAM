/*
Author: Amit Gupta
Date: 24-08-2026
Calculate parking charges based on vehicle type 
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter vehicle type (1=Bike, 2=Car, 3=Truck):- ";
    cin >> choice;

    // Charges depend on vehicle type
    if (choice == 1) {
        cout << "Parking Charges => ₹20" << endl;
    } else if (choice == 2) {
        cout << "Parking Charges => ₹50" << endl;
    } else if (choice == 3) {
        cout << "Parking Charges => ₹100" << endl;
    } else {
        cout << "Invalid vehicle type" << endl;
    }

    return 0;
}
