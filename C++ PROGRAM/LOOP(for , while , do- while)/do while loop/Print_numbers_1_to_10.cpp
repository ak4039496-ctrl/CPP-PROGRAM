/*
Author: Amit Gupta
Date: 18-Aug-2026
Program: Print numbers 1 to 10 using do while loop
*/

#include <iostream>
using namespace std;

int main() {
    int i = 1;              // starting number
    do {
        cout << i << " ";   // print number
        i++;                // increment
    } while (i <= 10);      // condition check at end
    return 0;
}
