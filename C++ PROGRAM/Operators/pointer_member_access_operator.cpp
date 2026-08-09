/*
Author: Amit Gupta
Date: 07-08-2026
Program: Demonstrate pointer member access operator (->)
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s1 = {"Amit", 20};
    Student *ptr = &s1;
    cout << "Name = " << ptr->name << ", Age = " << ptr->age << endl;
    return 0;
}
