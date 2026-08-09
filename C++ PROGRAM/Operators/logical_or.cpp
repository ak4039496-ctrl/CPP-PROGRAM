/*
Author: Amit Gupta
Date: 05-08-2026
Program: Demonstrate logical OR operator (||)
*/
#include <iostream>
using namespace std;

int main() {
    int a = -5, b = 10;
    if (a > 0 || b > 0)
        cout << "At least one number is positive" << endl;
    else
        cout << "Both numbers are non-positive" << endl;
    return 0;
}
