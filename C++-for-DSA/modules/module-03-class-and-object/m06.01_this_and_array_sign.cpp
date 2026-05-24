// this keyword and arrow sign

#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {   // Constructor declare
        // (*this).roll = roll;             // Dereference
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main() {
    Student rahim(45, 5, 3.9);
    Student karim(234, 4, 3.99);

    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.gpa << endl;

    cout << endl;

    cout << karim.roll << endl;
    cout << karim.cls << endl;
    cout << karim.gpa << endl;

    return 0;
}