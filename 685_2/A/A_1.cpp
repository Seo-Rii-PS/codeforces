//2020 SEORII®. All right reserved.
//Code created on 2020-11-21

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 1) cout << 0 << '\n';
        else if (n == 2) cout << 1 << '\n';
        else if (n == 3) cout << 2 << '\n';
        else if (n & 1) cout << 3 << '\n';
        else cout << 2 << '\n';
    }
    return 0;
}