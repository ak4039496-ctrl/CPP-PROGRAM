/*
Author: Amit Gupta
Date: 18-Aug-2026
 Cyber firewall rules using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int port; // variable for port number
    cout << "Enter port number:- ";
    cin >> port;

    switch(port) {
        case 80: cout << "Allow HTTP Traffic"; break;   // web traffic
        case 443: cout << "Allow HTTPS Traffic"; break; // secure traffic
        case 21: cout << "Block FTP Traffic"; break;    // file transfer
        case 22: cout << "Allow SSH Traffic"; break;    // secure shell
        default: cout << "Unknown port!";               // wrong input
    }
    return 0;
}
