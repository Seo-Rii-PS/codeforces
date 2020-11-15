//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long t, n, w, x, i;
    cin >> t;
    while (t--) {
        cin >> n >> w;
        vector<pair<long long, long long >> v;
        for (i = 0; i < n; ++i) {
            cin >> x;
            v.emplace_back(x, i);
        }
        sort(v.begin(), v.end());
        long long su = 0;
        for (i = 0; i < n; ++i) {
            su += v[i].first;
            if (su > w) {
                i = n;
                break;
            } else if (su >= (w + 1) / 2) break;
        }
        if (i == n) cout << -1 << '\n';
        else {
            cout << i + 1 << '\n';
            for (int j = 0; j <= i; ++j) cout << v[j].second + 1 << ' ';
            cout << '\n';
        }
    }
    return 0;
}