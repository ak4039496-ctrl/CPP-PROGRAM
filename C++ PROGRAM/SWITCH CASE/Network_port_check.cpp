/*
Author: Amit Gupta
Date: 21-Aug-2026
Network port check 
*/

#include <iostream>
using namespace std;

int main() {
    int port;
    cout << "Enter port number:- ";
    cin >> port;

    switch(port) {
        case 21: cout << "FTP Service"; break;
        case 22: cout << "SSH Service"; break;
        case 25: cout << "SMTP Mail Service"; break;
        case 80: cout << "HTTP Web Service"; break;
        case 443: cout << "HTTPS Secure Service"; break;
        default: cout << "Unknown/Custom Service";
    }
    return 0;
}
