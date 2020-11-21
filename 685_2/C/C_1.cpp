//2020 SEORII®. All right reserved.
//Code created on 2020-11-22

#include <bits/stdc++.h>

using namespace std;

void func() {
    int n, k;
    string a, b;
    cin >> n >> k >> a >> b;
    array<int, 26> ar = {0}, br = {0};
    for (auto &i:a) ++ar[i - 'a'];
    for (auto &i:b) ++br[i - 'a'];
    for (int i = 0; i < 25; ++i) {
        if (ar[i] == br[i]) continue;
        if (br[i] > ar[i] || (br[i] - ar[i]) % k != 0) {
            cout << "No\n";
            return;
        }
        ar[i + 1] += ar[i] - br[i];
    }
    if (ar[25] != br[25]) cout << "No\n";
    else cout << "Yes\n";
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        func();
    }
    return 0;
}