/*
Author: Amit Gupta
Date: 19-Aug-2026
Firewall log system 
*/

#include <iostream>
using namespace std;

int main() {
    int port; // port number
    cout << "Enter port number:- ";
    cin >> port;

    switch(port) {
        case 80: cout << "Log: HTTP Traffic"; break;   // web
        case 443: cout << "Log: HTTPS Traffic"; break; // secure web
        case 21: cout << "Log: FTP Blocked"; break;    // file transfer
        case 22: cout << "Log: SSH Traffic"; break;    // secure shell
        default: cout << "Unknown port!";              // wrong input
    }
    return 0;
}
