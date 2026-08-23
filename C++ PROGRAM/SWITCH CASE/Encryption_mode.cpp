/*
Author: Amit Gupta
Date: 18-Aug-2026
Encryption mode selector 
*/

#include <iostream>
using namespace std;

int main() {
    int mode; // encryption mode
    cout << "Enter mode (1=AES,2=RSA,3=SHA):- ";
    cin >> mode;

    switch(mode) {
        case 1: 
        cout << "AES Encryption Activated"; break;
        case 2: 
        cout << "RSA Encryption Activated"; break;
        case 3: 
        cout << "SHA Hashing Activated"; break;
        default: 
        cout << "Unknown Mode!";
    }
    return 0;
}
