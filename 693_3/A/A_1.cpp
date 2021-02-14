//2020 SEORII®. All right reserved.
//Code created on 2021-01-04

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, w, h, n;
    cin >> t;
    while (t--) {
        cin >> w >> h >> n;
        if ((1 << __builtin_ctz(w)) * (1 << __builtin_ctz(h)) >= n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}