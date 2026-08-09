/*
Author: Amit Gupta
Date: 04-08-2026
Program: Demonstrate pointer dereference operator (*)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a; // pointer stores address of a
    cout << "Value of a using pointer => " << *ptr << endl;
    return 0;
}
