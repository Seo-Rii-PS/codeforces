//2020 SEORII®. All right reserved.
//Code created on 2020-12-28

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n, m, f = 0;
    cin >> n;
    vector<int> r(n);
    for (auto &i:r) cin >> i;
    cin >> m;
    vector<int> b(m);
    for (auto &i:b) cin >> i;
    vector<vector<int>> v(n + 1, vector<int>(m + 1));
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i == 0 && j == 0) continue;
            else if (i == 0) v[i][j] = v[i][j - 1] + b[j - 1];
            else if (j == 0) v[i][j] = v[i - 1][j] + r[i - 1];
            else {
                v[i][j] = max(v[i][j - 1] + b[j - 1], v[i - 1][j] + r[i - 1]);
            }
            f = max(f, v[i][j]);
        }
    }
    cout << f << endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}