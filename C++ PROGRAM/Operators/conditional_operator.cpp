/*
Author: Amit Gupta
Date: 06-08-2026
Program: Demonstrate conditional operator with nested ? :
*/

#include <iostream>
using namespace std;

int main() {
    int marks = 75;
    string grade = (marks >= 90) ? "A+" : (marks >= 75 ? "A" : "B");
    cout << "Grade = " << grade << endl;
    return 0;
}
