/*
Author: Amit Gupta
Date: 08-08-2026
Program: Demonstrate combination of logical operators
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5, y = -3;
    if ((x > 0 && y < 0) || (x == 5))
        cout << "Condition True" << endl;
    else
        cout << "Condition False" << endl;
    return 0;
}
