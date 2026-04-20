// Marks same hle jar roll number smaller she age hbe

#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }

    void display() {
        cout << roll << " " << name << " " << section << " " << math_marks << " " << cls << endl;;
    }
};

int main() {
    Student salman("Salman", 1, 'A', 80, 8);
    Student atiq("Atiq", 2, 'A', 95, 8);
    Student afridi("Afridi", 3, 'A', 95, 8);

    if(salman.math_marks == atiq.math_marks && salman.math_marks == afridi.math_marks) {
        if(salman.roll < atiq.roll && salman.roll < afridi.roll) {
            salman.display();
        } else if(atiq.roll < afridi.roll) {
            atiq.display();
        } else {
            afridi.display();
        }
    } else if(salman.math_marks == atiq.math_marks) {
        if(salman.roll < atiq.roll) {
            salman.display();
        } else {
            atiq.display();
        }
    } else if(salman.math_marks == afridi.math_marks) {
        if(salman.roll < afridi.roll) {
            salman.display();
        } else {
            afridi.display();
        }
    } else if(atiq.math_marks == afridi.math_marks) {
        if(atiq.roll < afridi.roll) {
            atiq.display();
        } else {
            afridi.display();
        }
    } else if(salman.math_marks > atiq.math_marks && salman.math_marks > afridi.math_marks) {
        salman.display();
    } else if(atiq.math_marks > afridi.math_marks) {
        atiq.display();
    } else {
        afridi.display();
    }

    return 0;
}


/*
Student best = salman;

if(atiq.math_marks > best.math_marks || 
   (atiq.math_marks == best.math_marks && atiq.roll < best.roll)) {
    best = atiq;
}

if(afridi.math_marks > best.math_marks || 
   (afridi.math_marks == best.math_marks && afridi.roll < best.roll)) {
    best = afridi;
}

best.display();
*/