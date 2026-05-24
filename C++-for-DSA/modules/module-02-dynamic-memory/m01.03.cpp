// Static memory

#include<bits/stdc++.h>
using namespace std;

int *p; // Golober pointer variable declare

void fun() {
    int x = 10; // Static variable declare
    p = &x;

    // Dereference
    cout << "Fun -> " << *p << endl;   // 10
    return;  
    // Here theke return krar pre Main funtion ta paoya jabe na
}

int main() {
    fun();
    cout << "Main -> " << *p << endl;   // 0
    // Another online, linux , mac er run krle kono output dekhabena

    return 0;
}