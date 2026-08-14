/*
Author: Amit Gupta
Date: 09-08-2026
Check if a number belongs to the Fibonacci series using if-else
*/
#include <iostream>
#include <cmath>
using namespace std;

// Helper function to check perfect square
bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

int main() {
    int num;
    cout << "Enter a number:- ";
    cin >> num;

    // Fibonacci check formula
    if (isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4)) {
        cout << num << " is a Fibonacci number." << endl;
    } else {
        cout << num << " is not a Fibonacci number." << endl;
    }

    return 0;
}
