#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g) {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main() {
    // int r;
    // int c;
    // double g;
    // cin >> r >> c >> g;
    
    // Student rahim(r, c, g);

    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;
 
    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.gpa << endl;

    return 0;
}