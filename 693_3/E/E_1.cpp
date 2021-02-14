//2020 SEORII®. All right reserved.
//Code created on 2021-01-05

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n, w, h, la = INT_MAX, nla = INT_MAX, v = -1, nv = -1;
    cin >> n;
    vector<tuple<int, int, int>> d;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> w >> h;
        if (w > h) swap(w, h);
        d.push_back(make_tuple(w, h, i));
    }
    sort(d.begin(), d.end());
    for (int i = 0; i < n; ++i) {
        if (!i || get<0>(d[i]) != get<0>(d[i - 1])) {
            if (nla < la) {
                la = nla;
                v = nv;
            }
        }
        if (get<1>(d[i]) > la) {
            a[get<2>(d[i])] = v + 2;
        }
        if (nla > get<1>(d[i])) {
            nla = get<1>(d[i]);
            nv = get<2>(d[i]);
        }
    }
    for (auto &i:a) cout << i - 1 << ' ';
    cout << '\n';
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}