#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
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
    Student karim(234, 5, 3.99);

    rahim.display();
    karim.display();

    return 0;
}