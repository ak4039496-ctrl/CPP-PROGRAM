/*
Author: Amit Gupta
Date: 22-Aug-2026
Shopping cart checkout 
*/

#include <iostream>
using namespace std;

int main() {
    int product; // product type
    cout << "Enter product (1=Electronics,2=Clothes,3=Groceries):- ";
    cin >> product;

    switch(product) {
        case 1: cout << "Discount => 15% on Electronics"; break;
        case 2: cout << "Discount => 10% on Clothes"; break;
        case 3: cout << "Discount => 5% on Groceries"; break;
        default: cout << "Invalid product!";
    }
    return 0;
}
