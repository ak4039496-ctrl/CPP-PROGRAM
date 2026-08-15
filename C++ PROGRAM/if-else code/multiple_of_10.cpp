/*
Author: Amit Gupta
Date: 09-08-2026
Check if a number is a multiple of 10
*/

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    if (num % 10 == 0) {
        cout << num << " is a multiple of 10" << endl;
    } else {
        cout << num << " is not a multiple of 10" << endl;
    }

    return 0;
}
