/*
Author: Amit Gupta
Date: 18-Aug-2026 
Exam portal using switch case
*/

#include <iostream>
using namespace std;

int main() {
    int option; // exam option
    cout << "Enter option (1=Start Exam,2=View Results,3=Exit):- ";
    cin >> option;

    switch(option) {
        case 1: cout << "Exam Started"; break;       // start exam
        case 2: cout << "Showing Results"; break;    // view results
        case 3: cout << "Exiting Portal"; break;     // exit
        default: cout << "Invalid option!";          // wrong input
    }
    return 0;
}
