/*
Author: Amit Gupta
Date: 19-Aug-2026
Program: Library system 
*/

#include <iostream>
using namespace std;

int main() {
    int section; // library section code
    cout << "Enter section (1=Science,2=Arts,3=Technology):- ";
    cin >> section;

    switch(section) {
        case 1: cout << "Welcome to Science Section"; break;
        case 2: cout << "Welcome to Arts Section"; break;
        case 3: cout << "Welcome to Technology Section"; break;
        default: cout << "Invalid section!";
    }
    return 0;
}
