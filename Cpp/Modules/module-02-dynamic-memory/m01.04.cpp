// Dynamic memory

#include<bits/stdc++.h>
using namespace std;

int* p;     // Pointer variable declare

void fun() {
    int* x = new int;   // Dynamic variable declare
    *x = 10;    // Dereference
    p = x;

    cout << "Fun -> " << *p << endl;    // 10
    return;
}

int main() {
    fun();
    cout << "Main -> " << *p << endl;   // 10

    return 0;
}