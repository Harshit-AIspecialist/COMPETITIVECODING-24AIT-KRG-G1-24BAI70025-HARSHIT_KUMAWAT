#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i= 0; i < n; i++) cin >> a[i];
    int total_ones = 0;
    for (int x : a) if (x == 1) total_ones++;
    int max_gain = INT_MIN, curr = 0;

    for (int i = 0;i< n;i++) {
        int val = (a[i] == 0 ? 1 : -1);

        curr = max(val, curr + val);
        max_gain = max(max_gain, curr);
    }
    if (max_gain<0)
        cout<<n- 1;
    else
        cout<< total_ones + max_gain;

    return 0;
}
