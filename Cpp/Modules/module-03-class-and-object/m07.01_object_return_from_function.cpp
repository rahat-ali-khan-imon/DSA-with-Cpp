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

Student fun() {
    Student karim(2, 5, 5.00);  // function er modhe object declare krechi
    return karim;   // object karim return krechi
}

int main() {
    Student obj = fun();    // Static object

    cout << obj.roll << endl;
    cout << obj.cls << endl;
    cout << obj.gpa << endl;

    return 0;
}