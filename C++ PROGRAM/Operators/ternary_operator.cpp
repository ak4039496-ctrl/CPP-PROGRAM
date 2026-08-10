/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate ternary operator (? :)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    cout << "Maximum => " << max << endl;
    return 0;
}
