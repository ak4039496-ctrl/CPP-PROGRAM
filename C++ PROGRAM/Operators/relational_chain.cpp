/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate chained relational operators
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;
    if (a < b && b < c)
        cout << "a < b < c is True" << endl;
    else
        cout << "Condition False" << endl;
    return 0;
}
