/*
Author: Amit Gupta
Date: 09-08-2026
Calculate hotel room charges based on room type
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter room type (1=Standard, 2=Deluxe, 3=Suite):- ";
    cin >> choice;

    if (choice == 1) {
        cout << "Room Charges = ₹2000 per night." << endl;
    } else if (choice == 2) {
        cout << "Room Charges = ₹3500 per night." << endl;
    } else if (choice == 3) {
        cout << "Room Charges = ₹5000 per night." << endl;
    } else {
        cout << "Invalid room type." << endl;
    }

    return 0;
}
