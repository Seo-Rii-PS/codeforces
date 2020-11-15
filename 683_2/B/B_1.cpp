//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int tl(vector<int> &v, int s, int f) {
    if (s == f) return 0;
    vector<int> t;
    t.clear();
    t.resize(f);
    t[s] = v[s];
    for (int i = s + 1; i < f; ++i) {
        t[i] = t[i - 1] + v[i];
        t[i] = max(t[i], (i > 1 ? t[i - 2] : 0) - v[i - 1] - v[i]);
    }
    return f ? t[f - 1] : 0;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<vector<int>> v, d;
        v.clear();
        d.clear();
        v.resize(n);
        d.resize(n);
        for (auto &i:v) {
            i.clear();
            i.resize(m);
            for (auto &j:i) cin >> j;
        }
        for (int i = 0; i < n; ++i) {
            d[i].clear();
            d[i].resize(m);
            if (i) {
                d[i][0] = d[i - 1][m - 1] + v[i][0];
                d[i][0] = max(d[i][0], tl(v[i - 1], 1, m) + (i > 1 ? d[i - 2][m - 1] : 0) - v[i][0] - v[i - 1][0]);
            } else d[i][0] = (v[i][0]);
            for (int j = 1; j < m; ++j) {
                d[i][j] = d[i][j - 1] + v[i][j];
                d[i][j] = max(d[i][j], (j > 1 ? d[i][j - 2] : (i ? d[i - 1][m - 1] : 0)) - v[i][j] - v[i][j - 1]);
                if (i)
                    d[i][j] = max(d[i][j],
                                  tl(v[i - 1], j + 1, m) + tl(v[i], 0, j) + d[i - 1][j - 1] - v[i][j] -
                                  v[i - 1][j]);
            }
        }
        cout << d[n - 1][m - 1] << endl;
    }
    return 0;
}