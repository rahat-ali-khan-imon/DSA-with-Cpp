#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Student arr[2 * n];

    for(int i = 0; i < 2 * n; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].gpa;
    }

    for(int i = 0; i < 2 * n; i++) {
        arr[i].display();
    }

    return 0;
}

/*
Input:
3
Sakib 123 3.50
Alice 456 3.79
Nila 789 3.99
Abir 987 3.60
Apple 654 3.25
Hasan 321 4.00

Output:
Name: Sakib
Roll: 123
GPA: 3.5

Name: Alice
Roll: 456
GPA: 3.79

Name: Nila
Roll: 789
GPA: 3.99

Name: Abir
Roll: 987
GPA: 3.6

Name: Apple
Roll: 654
GPA: 3.25

Name: Hasan
Roll: 321
GPA: 4



1. Data overwrite হচ্ছে না

আগের মতো same object reuse করছেন না
👉 এখন সব data array-তে store হচ্ছে
    Student arr[2 * n];


2. Flexible input handling

আপনি 2 * n ব্যবহার করেছেন, কারণ প্রতি loop-এ ২টা student নিচ্ছেন আগে
👉 এখন সব input sequential ভাবে নিচ্ছেন — good design ✔️


3. Separation of concern
input → main
output → display() function
👉 clean structure ✔️


⚠️ ছোট improvement (optional but important)
❌ char array use
    char name[100];
👉 এটা old style (C-style string)

✅ Better:
    string name;
👉 তাহলে strcpy বা size limit নিয়ে ভাবতে হবে না
*/