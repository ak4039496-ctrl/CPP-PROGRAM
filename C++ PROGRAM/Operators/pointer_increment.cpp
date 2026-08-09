/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate pointer increment operator
*/

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    cout << "First element = " << *p << endl;
    p++; // move to next element
    cout << "Second element = " << *p << endl;
    return 0;
}
