/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate typeid operator (requires <typeinfo>)
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a = 10;
    double b = 3.14;
    cout << "Type of a => " << typeid(a).name() << endl;
    cout << "Type of b => " << typeid(b).name() << endl;
    return 0;
}
