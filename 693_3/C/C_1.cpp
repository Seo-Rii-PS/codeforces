//2020 SEORII®. All right reserved.
//Code created on 2021-01-04

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n;
    long long da = 0;
    cin >> n;
    vector<long long> v(n), d(n);
    for (auto &i:v) cin >> i;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] + i >= n) d[i] = v[i];
        else d[i] = d[i + v[i]] + v[i];
        da = max(da, d[i]);
    }
    cout << da << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}