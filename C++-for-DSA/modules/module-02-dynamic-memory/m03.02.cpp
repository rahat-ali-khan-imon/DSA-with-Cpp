#include<bits/stdc++.h>
using namespace std;

int* fun(int arr_size) {
    int* arr = new int[arr_size];

    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    return arr;
}

int main() {
    int arr_size;
    cin >> arr_size;

    int * arr = fun(arr_size);

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}