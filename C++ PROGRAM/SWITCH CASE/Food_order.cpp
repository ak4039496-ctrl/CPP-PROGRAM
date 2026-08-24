/*
Author: Amit Gupta
Date: 19-Aug-2026
Food ordering system 
*/

#include <iostream>
using namespace std;

int main() {
    int food; // food code
    cout << "Enter food (1=Pizza,2=Burger,3=Sandwich):- ";
    cin >> food;

    switch(food) {
        case 1: cout << "Order placed: Pizza"; break;
        case 2: cout << "Order placed: Burger"; break;
        case 3: cout << "Order placed: Sandwich"; break;
        default: cout << "Invalid food choice!";
    }
    return 0;
}
