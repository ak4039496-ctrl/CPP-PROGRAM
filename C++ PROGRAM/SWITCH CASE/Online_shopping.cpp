/*
Author: Amit Gupta
Date: 21-Aug-2026
Online shopping system 
*/

#include <iostream>
using namespace std;

int main() {
    int item; // variable for shopping item
    cout << "Enter item (1=Mobile,2=Laptop,3=Headphones):- ";
    cin >> item;

    switch(item) {
        case 1: cout << "Order placed: Mobile"; break;     // mobile order
        case 2: cout << "Order placed: Laptop"; break;     // laptop order
        case 3: cout << "Order placed: Headphones"; break; // headphones order
        default: cout << "Invalid item!";                  // wrong input
    }
    return 0;
}
