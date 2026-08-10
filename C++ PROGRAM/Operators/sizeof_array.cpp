/*
Author: Amit Gupta
Date: 04-08-2026
Program: Demonstrate sizeof operator with array
*/

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Size of array => " << sizeof(arr) << " bytes" << endl;
    cout << "Size of one element => " << sizeof(arr[0]) << " bytes" << endl;
    return 0;
}
