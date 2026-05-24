// Sort function
// Descending sorting

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr_size;
    cin >> arr_size;
    
    int arr[arr_size];

    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    // greater<data_type>() ----> built in compare function
    sort(arr, arr + arr_size, greater<int>());  // Descending sorting

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}