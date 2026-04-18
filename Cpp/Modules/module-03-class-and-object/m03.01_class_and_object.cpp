#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student obj;

    char temp[100] = "Sakib";
    strcpy(obj.name, temp);
    obj.roll = 1234;
    obj.gpa = 3.89;

    cout << obj.name << endl;
    cout << obj.roll << endl;
    cout << obj.gpa << endl;

    return 0;
}