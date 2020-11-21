//2020 SEORII®. All right reserved.
//Code created on 2020-11-22

#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int gxor(int a, int b) {
    int r = 0;
    for (int i = a; i < b; ++i) r ^= v[i];
    return r;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, fl, s, f;
    fl = s = f = 0;
    cin >> n;
    v.resize(n);
    for (int i = 1; i < n; ++i) {
        cout << "XOR " << i << ' ' << i + 1 << '\n';
        cout.flush();
        cin >> v[i - 1];
    }
    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            fl = 1;
            s = i;
            f = i + 1;
            break;
        }
        if (fl) break;
        int t = v[i];
        for (int j = i + 1; j < n - 1; ++j) {
            t ^= v[j];
            if (!t) {
                fl = 1;
                s = i;
                f = j + 1;
                break;
            }
        }
    }
    if (fl) {
        int val;
        cout << "OR " << s + 1 << ' ' << f + 1 << '\n';
        cout.flush();
        cin >> val;
        int t = val ^gxor(0, s);
        cout << "! " << t;
        for (int i = 0; i < n - 1; ++i) {
            t ^= v[i];
            cout << ' ' << t;
        }
        cout << '\n';
        exit(0);
    } else {
        int val;
        cout << "OR " << 1 << ' ' << 2 << '\n';
        cout.flush();
        cin >> val;
        int val2;
        cout << "OR " << 1 << ' ' << 3 << '\n';
        cout.flush();
        cin >> val2;
    }
    return 0;
}