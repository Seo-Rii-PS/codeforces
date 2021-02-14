//2020 SEORII®. All right reserved.
//Code created on 2021-01-04

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, t, on = 0, tw = 0;
        cin >> n;
        while (n--) {
            cin >> t;
            if (t == 1) ++on;
            else ++tw;
        }
        if (on & 1) cout << "NO\n";
        else if (!on && tw & 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}