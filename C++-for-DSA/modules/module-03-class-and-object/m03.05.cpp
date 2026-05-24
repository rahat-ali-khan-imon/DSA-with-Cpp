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

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> obj1.name >> obj1.roll >> obj1.gpa;
        cin >> obj2.name >> obj2.roll >> obj2.gpa;

        obj1.display();
        obj2.display();
    }
    

    // obj1.display();
    // obj2.display();

    return 0;
}

/*
Input:
3
Sakib 123 3.50
Alice 456 3.79
Nila 789 3.99
Abir 987 3.60
Apple 654 3.25
Hasan 321 4.00

Output:
Name: Sakib
Roll: 123
GPA: 3.5

Name: Alice
Roll: 456
GPA: 3.79

Name: Nila
Roll: 789
GPA: 3.99

Name: Abir
Roll: 987
GPA: 3.6

Name: Apple
Roll: 654
GPA: 3.25

Name: Hasan
Roll: 321
GPA: 4
*/