#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student obj1, obj2;

    // getline(cin, obj1.name);     // Error
    cin.getline(obj1.name, 100);
    cin >> obj1.roll >> obj1.gpa;
    cin.ignore(); // getchar();
    // getline(cin, obj2.name);
    cin.getline(obj2.name, 100);
    cin >> obj2.roll >> obj2.gpa;

    cout << obj1.name << " " << obj1.roll << " " << obj1.gpa << endl;
    cout << obj2.name << " " << obj2.roll << " " << obj2.gpa << endl;

    return 0;
}


/*
Input:
Sakib Ali
123 3.50
Alice ph
456 3.79

Output:
Sakib Ali 123 3.5
Alice ph 456 3.79
*/