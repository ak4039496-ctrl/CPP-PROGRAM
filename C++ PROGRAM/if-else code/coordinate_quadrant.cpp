/*
Author: Amit Gupta
Date: 08-08-2026
Find the quadrant of a point
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter coordinates (x y):- ";
    cin >> x >> y;

    // Check quadrant
    if (x > 0 && y > 0) {
        cout << "Point lies in First Quadrant" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Point lies in Second Quadrant" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Point lies in Third Quadrant" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Point lies in Fourth Quadrant" << endl;
    } else {
        cout << "Point lies on an Axis" << endl;
    }

    return 0;
}
