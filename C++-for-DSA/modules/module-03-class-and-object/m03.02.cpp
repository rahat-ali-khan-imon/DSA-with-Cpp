#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name1[100];
    string name2;
    int roll;
    double gpa;
};

int main() {
    Student obj;

    char temp[100] = "Sakib";
    strcpy(obj.name1, temp);
    obj.name2 = "Alice";
    obj.roll = 1234;
    obj.gpa = 3.97;

    cout << obj.name1 << endl;
    cout << obj.name2 << endl;
    cout << obj.roll << endl;
    cout << obj.gpa << endl;

    return 0;
}