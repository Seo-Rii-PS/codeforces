//2020 SEORII®. All right reserved.
//Code created on 2021-01-05

#include <bits/stdc++.h>

using namespace std;

vector<bool> v[2];

std::pair<int, int> operator+(const std::pair<int, int> &x, const std::pair<int, int> &y) {
    return std::make_pair(x.first + y.first, x.second + y.second);
}

pair<int, int> d(int x, int y) {
    if (v[x][y]) return make_pair(0, 0);
    v[x][y] = true;
    auto p = d(1 - x, y);
    p = p + d(x, y + 1);
    if ((x + y) & 1) p = p + make_pair(1, 0);
    else p = p + make_pair(0, 1);
    return p;
}

void f() {
    int n, m, x, y;
    cin >> n >> m;
    v[0] = vector<bool>(n);
    v[1] = vector<bool>(n);
    while (m--) {
        cin >> x >> y;
        v[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!v[i][j]) {
                auto e = d(i, j);
                if (e.first != e.second) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}