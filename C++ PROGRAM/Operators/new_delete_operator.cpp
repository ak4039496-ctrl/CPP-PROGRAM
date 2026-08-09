/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate new and delete operators
*/

#include <iostream>
using namespace std;

int main() {
    int *p = new int(50); // allocate memory
    cout << "Value = " << *p << endl;
    delete p; // free memory
    return 0;
}
