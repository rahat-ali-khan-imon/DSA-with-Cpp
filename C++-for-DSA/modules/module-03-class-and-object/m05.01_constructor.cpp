#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {   // Constructor declare
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main() {
    Student rahim(45, 5, 3.9);     // Constructor call
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