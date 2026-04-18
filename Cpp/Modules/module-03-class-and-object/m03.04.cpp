#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
    }
};

int main() {
    Student obj1, obj2;

    cin >> obj1.name >> obj1.roll >> obj1.gpa;
    cin >> obj2.name >> obj2.roll >> obj2.gpa;

    obj1.display();
    // cout << endl;
    obj2.display();

    return 0;
}

/*
Input:
Sakib 123 3.50
Alice 456 3.79

Output:
Name: Sakib
Roll: 123
GPA: 3.5

Name: Alice
Roll: 456
GPA: 3.79
*/