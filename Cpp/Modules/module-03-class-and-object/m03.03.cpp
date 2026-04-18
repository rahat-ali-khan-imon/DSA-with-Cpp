#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student obj1, obj2;

    cin >> obj1.name >> obj1.roll >> obj1.gpa;
    cin >> obj2.name >> obj2.roll >> obj2.gpa;

    cout << obj1.name << " " << obj1.roll << " " << obj1.gpa << endl;
    cout << obj2.name << " " << obj2.roll << " " << obj2.gpa << endl;

    return 0;
}

/*
Input:
Sakib 123 3.50
Alice 456 3.79

Output:
Sakib 123 3.50
Alice 456 3.79
*/