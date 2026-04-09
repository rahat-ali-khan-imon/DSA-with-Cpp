// Normally max() and min() function

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int mx_val = INT_MIN;
    int mn_val = INT_MAX;

    // for(int i = 0; i < n; i++)
    while(n--) {
        int val;
        cin >> val;

        if(val > mx_val) {
            mx_val = val;
        } if(val < mn_val) {
            mn_val = val;
        }
    }

    cout << "Minimum value: " << mn_val << endl;
    cout << "Maximum value: " << mx_val << endl;

    return 0;
}