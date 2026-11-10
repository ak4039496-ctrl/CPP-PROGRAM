/*
Author: Amit Gupta
Date: 16-08-2026
Program: Manage company inventory for N items
*/

#include <iostream>
using namespace std;

int main() {
    int items;
    cout << "Enter number of inventory items: ";
    cin >> items;

    int stock;
    for (int i = 1; i <= items; i++) {
        cout << "Enter stock quantity for item " << i << ": ";
        cin >> stock;
        cout << "Item " << i << " has " << stock << " units" << endl;
    }
    return 0;
}
