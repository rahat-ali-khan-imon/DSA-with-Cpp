#include<bits/stdc++.h>
using namespace std;

void fun(int *arr, int arr_size) {
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr_size;
    cin >> arr_size;

    int* arr = new int[arr_size];

    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    fun(arr, arr_size);

    delete[] arr;

    return 0;
}