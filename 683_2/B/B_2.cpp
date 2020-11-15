//2020 SEORII®. All right reserved.
//Code created on 2020-11-16

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<vector<int>> v;
        vector<vector<pair<int, int>>> d;
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
            if(i)d[i][0].first=d[i-1][m-1]+max()
            for(int j=1;j<m;++j) {

            }
        }
    }
    return 0;
}