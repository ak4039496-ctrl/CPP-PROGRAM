/*
Author: Amit Gupta
Date: 09-08-2026
Find the largest of four numbers
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers:- ";
    cin >> a >> b >> c >> d;

    // Compare step by step
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    cout << "Largest number is: " << largest << endl;

    return 0;
}
