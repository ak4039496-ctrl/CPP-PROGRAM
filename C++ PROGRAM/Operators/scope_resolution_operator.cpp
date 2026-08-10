/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate scope resolution operator (::)
*/

#include <iostream>
using namespace std;

int value = 100; // global variable

int main() {
    int value = 50; // local variable
    cout << "Local value => " << value << endl;
    cout << "Global value => " << ::value << endl; // access global using ::
    return 0;
}
