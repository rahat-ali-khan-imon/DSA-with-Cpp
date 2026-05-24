// Dynamic array return from function

#include<bits/stdc++.h>
using namespace std;

int* fun() {    // Pointer hishabei return krtechi
    // int arr[5];     // Static array declare
    int* arr = new int[5];  // Dynamic array declare

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    return arr;
}

int main() {
    int *arr = fun();   // Pointer hishabei recive krte hbe

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}