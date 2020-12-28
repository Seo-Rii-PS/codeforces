//2020 SEORII®. All right reserved.
//Code created on 2020-12-28

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n, k, l, ma, mi;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i:v) cin >> i;
    ma = mi = v[0];
    l = v.back();
    for (int i = 1; i < n; ++i) {
        int nma, nmi;
        nma = min(v[i] + k - 1, ma + k - 1);
        nmi = max(v[i], mi - k + 1);
        if (nma < nmi) {
            cout << "NO" << '\n';
            return;
        }
        ma = nma;
        mi = nmi;
    }
    if (mi > l || l > ma) {
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}