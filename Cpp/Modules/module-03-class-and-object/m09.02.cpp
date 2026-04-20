#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) {   // Constructor declare
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* karim = new Student(2, 5, 5.00);   // Dynamic object
    return karim;
}

int main() {
    Student* p = fun(); 

    cout << p->roll << endl;
    cout << p->cls << endl;
    cout << p->gpa << endl;

    return 0;
}