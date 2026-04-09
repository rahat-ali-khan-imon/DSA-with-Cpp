#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mx_val = INT_MIN;
    int mn_val = INT_MAX;

    for(int i = 0; i < n; i++) {
        mx_val = max(v[i], mx_val);
        mn_val = min(v[i], mn_val);
    }

    cout << mx_val << " " << mn_val << endl;

    return 0;
}