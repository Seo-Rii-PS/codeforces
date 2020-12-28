//2020 SEORII®. All right reserved.
//Code created on 2020-12-29

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(n);
    while (v.back() != 2) {
        for (int i = 2;; ++i) {
            if (i * i >= v.back()) {
                v.push_back(i);
                break;
            }
        }
    }
    cout << v.size() + n - 3 << '\n';
    auto li = v;
    for (int i = 2; i < n; ++i) {
        if (v.back() == i) {
            v.pop_back();
        } else cout << i << ' ' << n << '\n';
    }
    for (int i = 0; i < li.size() - 1; ++i) {
        cout << li[i] << ' ' << li[i + 1] << '\n';
        cout << li[i] << ' ' << li[i + 1] << '\n';
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}