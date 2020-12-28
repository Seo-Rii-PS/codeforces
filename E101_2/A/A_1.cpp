//2020 SEORII®. All right reserved.
//Code created on 2020-12-28

#include <bits/stdc++.h>

using namespace std;

void f() {
    string s;
    cin >> s;
    int l, r;
    if (s.length() % 2 == 1) {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') l = i;
        if (s[i] == ')') r = i;
    }
    if (l < r) {
        cout << "YES" << '\n';
        return;
    } else if (r == 0 || l == s.length() - 1) {
        cout << "NO" << '\n';
        return;
    } else {
        cout << "YES" << '\n';
        return;
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