#include<bits/stdc++.h>
using namespace std;

int main() {
    // int x = 10;  // Stack variable declare
    int* p1 = new int;  // Dynamic variable declare
    *p1 = 100;

    int* p2 = new int(20);

    cout << p1 << " " << p2 << endl;
    cout << *p1 << " " << *p2 << endl;  // Dereference

    return 0;
}