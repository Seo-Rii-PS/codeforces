//2020 SEORII®. All right reserved.
//Code created on 2021-01-04

#include <bits/stdc++.h>

using namespace std;

void f() {
    int n, t;
    cin >> n;
    vector<int> odd, even;
    while (n--) {
        cin >> t;
        if (t & 1) odd.push_back(t);
        else even.push_back(t);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) f();
    return 0;
}