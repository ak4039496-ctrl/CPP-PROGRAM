/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate chained assignment operator (=)
*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    a = b = c = 100; // chained assignment
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    return 0;
}
