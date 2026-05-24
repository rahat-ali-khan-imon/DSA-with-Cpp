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
};

int main() {
    Student rahim(45, 5, 3.2);      // Static object
    Student* karim = new Student(10, 5, 4.77);    // Dynamic object create

    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.gpa << endl;

    cout << endl;

    cout << karim->roll << endl;
    cout << karim->cls << endl;
    cout << karim->gpa << endl;

    return 0;
}