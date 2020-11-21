//2020 SEORII®. All right reserved.
//Code created on 2020-11-21

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n, q, st, fi, c, fl;
    cin >> t;
    while (t--) {
        string s;
        cin >> n >> q >> s;
        while (q--) {
            c = fl = 0;
            cin >> st >> fi;
            --st;
            --fi;
            for (int i = st; i < fi; ++i) {
                if (s[c] != s[i]) {
                    if (i != st)fl = 1;
                    while (s[c] != s[i] && c < n) ++c;
                }
                ++c;
            }
            if (c > n) cout << "NO\n";
            else {
                if (!fl) ++c;
                while (s[c] != s[fi] && c < n) ++c;
                if (c == n) cout << "NO\n";
                else cout << "YES\n";
            }
        }
    }
    return 0;
}