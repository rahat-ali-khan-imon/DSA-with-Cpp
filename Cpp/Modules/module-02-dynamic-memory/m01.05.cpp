#include<bits/stdc++.h>
using namespace std;

int* p;

void fun() {
    int* x = new int(100);
    p = x;

    cout << "Fun -> " << *p << endl;    // 10
    return;
}

int main() {
    fun();
    cout << "Main -> " << *p << endl;   // 10

    return 0;
}