/*
Author: Amit Gupta
Date: 04-08-2026
Program: Demonstrate logical AND operator (&&)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    if (a > 0 && b > 0)
        cout << "Both numbers are positive" << endl;
    else
        cout << "Condition not satisfied" << endl;
    return 0;
}
