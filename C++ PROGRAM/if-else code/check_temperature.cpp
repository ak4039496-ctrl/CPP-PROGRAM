/*
Author: Amit Gupta
Date: 08-08-2026
Check if temperature is hot, cold or normal
*/

#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature in Celsius:- ";
    cin >> temp;

    if (temp > 30) {
        cout << "Weather is Hot " << endl;
    } else if (temp < 15) {
        cout << "Weather is Cold " << endl;
    } else {
        cout << "Weather is Normal " << endl;
    }

    return 0;
}
