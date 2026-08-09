/*
Author: Amit Gupta
Date: 04-08-2026
Program: Demonstrate member access operator (.)
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s1 = {"Amit", 20};
    cout << "Name = " << s1.name << ", Age = " << s1.age << endl;
    return 0;
}
