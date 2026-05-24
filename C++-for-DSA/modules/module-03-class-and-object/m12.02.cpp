#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};

int main() {
    int T;
    cin >> T;

    while(T--) {
        Student topper;

        for(int i = 1; i <= 3; i++) {
            Student temp;
            cin >> temp.roll >> temp.name >> temp.section >> temp.math_marks >> temp.cls;

            if(i == 1) {
                topper = temp;
              } else {
                if(temp.math_marks > topper.math_marks) {
                    topper = temp;
                } else if(temp.math_marks == topper.math_marks) {
                    if(temp.roll < topper.roll) {
                        topper = temp;
                    }
                }
            }
        }

        cout << topper.roll << " " << topper.name << " " << topper.section << " " << topper.math_marks << " " << topper.cls << endl;
    }

    return 0;
}


/* Marks same hle jar roll number smaller she age hbe
Input:
Enter test case: 1
1 Salman A 80 8
3 Atiq A 95 8
2 Afridi A 95 8

Output:
2 Afridi A 95 8


Input:
Enter test case: 3
1 sakib A 50
2 rakib D 96
3 akib C 90
1 sakib A 50
2 rakib D 96
3 akib C 96
1 sakib A 50
2 rakib D 50
3 akib C 40

Output:
2 rakib D 96
2 rakib D 96
1 sakib A 50
*/