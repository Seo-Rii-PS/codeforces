//2020 SEORII®. All right reserved.
//Code created on 2020-11-22

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    long long t, d, k;
    cin >> t;
    while (t--) {
        cin >> d >> k;
        long long x, y;
        x = y = floor(sqrt(d)) / 2;
        x=y=0;
        while (1) {
            x += k;
            if (x * x + y * y > d * d) {
                cout << "Utkarsh\n";
                break;
            }
            y += k;
            if (x * x + y * y > d * d) {
                cout << "Ashish\n";
                break;
            }
        }
    }
    return 0;
}