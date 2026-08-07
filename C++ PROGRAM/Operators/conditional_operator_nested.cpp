/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate nested conditional operator (? :)
*/

#include <iostream>
using namespace std;

int main() {
    int marks = 85;
    string grade = (marks >= 90) ? "A+" : (marks >= 75 ? "A" : "B");
    cout << "Grade = " << grade << endl;
    return 0;
}
