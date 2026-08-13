/*
Author: Amit Gupta
Date: 08-08-2026
Calculate electricity bill 
*/

#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;
    cout << "Enter electricity units consumed:- ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5; // ₹5 per unit
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7; // ₹7 per unit after 100
    } else {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10; // ₹10 per unit after 200
    }

    cout << "Total Electricity Bill = ₹" << bill << endl;

    return 0;
}
