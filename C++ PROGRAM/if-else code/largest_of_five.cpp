/*
Author: Amit Gupta
Date: 09-08-2026
Find the largest of five numbers
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five numbers:- ";
    cin >> a >> b >> c >> d >> e;

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;
    if (e > largest) largest = e;

    cout << "Largest number is: " << largest << endl;

    return 0;
}
