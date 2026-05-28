// swap() vectors

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5};

    swap(v1, v2);

    cout << "v1: ";
    for(int i : v1) {
        cout << i << " ";   // 4 5
    } 
    cout << endl;

    cout << "v2: ";
    for(int i : v2) {
        cout << i << " ";   // 1 2 3
    }

    return 0;
}