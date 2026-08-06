/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate comma operator (,)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = (b = 5, b + 10); // comma operator evaluates left to right
    cout << "Value of a => " << a << endl;
    return 0;
}
