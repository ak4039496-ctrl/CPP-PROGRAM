/*
Author: Amit Gupta
Date: 09-08-2026
Check delivery availability based on location 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    cout << "Enter your city:- ";
    cin >> city;

    // Delivery availability check
    if (city == "Patna" || city == "Delhi" || city == "Mumbai") {
        cout << "Delivery Available in " << city << endl;
    } else {
        cout << "Delivery Not Available in " << city << endl;
    }

    return 0;
}
