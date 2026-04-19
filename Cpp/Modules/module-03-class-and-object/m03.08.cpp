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
    Student obj1, obj2;

    cin.getline(obj1.name1, 100);
    getline(cin, obj1.name2);
    cin >> obj1.roll >> obj1.gpa;

    cin.ignore();
    // getchar();

    cin.getline(obj2.name1, 100);
    getline(cin, obj2.name2);
    cin >> obj2.roll >> obj2.gpa;

    cout << obj1.name1 << endl;
    cout << obj1.name2 << endl;
    cout << obj1.roll << endl;
    cout << obj1.gpa << endl;

    cout << endl;

    cout << obj2.name1 << endl;
    cout << obj2.name2 << endl;
    cout << obj2.roll << endl;
    cout << obj2.gpa << endl;

    return 0;
}


/*
Input:
Rakib Ali Khan
Sakib and Sakib
1234 3.77
Abir Hasan DJ
Alice Alice Alice
3456 4.0

Output:
Rakib Ali Khan
Sakib and Sakib
1234
3.77

Abir Hasan DJ
Alice Alice Alice
3456
4
*/