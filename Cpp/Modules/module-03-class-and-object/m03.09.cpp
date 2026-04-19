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

    cin.getline(obj1.name, 100);
    cin >> obj1.roll >> obj1.gpa;
    cin.ignore();
    cin.getline(obj2.name, 100);
    cin >> obj2.roll >> obj2.gpa;

    obj1.display();
    obj2.display();

    return 0;
}


/*
Input:
Alice Alice Alice
1234 3.77
Abir Hasan DJ
3456 4.0

Output:
Name: Alice Alice Alice
Roll: 1234
GPA: 3.77

Name: Abir Hasan DJ
Roll: 3456
GPA: 4



🧠 important learning point
    ৩টা input type:
    cin.getline() → full line (char array)
    getline(cin, string) → full line (string)
    cin >> → normal input

👉 সমস্যা হয় কারণ:
cin >> newline রেখে দেয়
তাই পরের getline() skip হয়ে যায়
*/