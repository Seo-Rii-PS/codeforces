//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << n << '\n';
        for (int i = 1; i <= n; ++i) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}