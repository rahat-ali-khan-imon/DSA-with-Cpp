#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {
        roll = r;
        cls = c;
        gpa = g;
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Class: " << cls << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
    }
};

int main() {
    Student rahim(45, 5, 3.9);
    Student karim(234, 4, 3.99);

    rahim.display();
    karim.display();

    return 0;
} 