#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        int n, x, k;
        cin >> n >> x >> k;

        int go = (x / k) * k;

        if (x % k == 0) {
            cout << 0 << '\n';
        } else if (x > k) {
            if (n == x) {
                cout << (k - go) << '\n';
            } else
            cout << min((n - x), (x - go)) << '\n';
        } else {
            cout << min(x,(k - x)) << '\n';
        }
    }
    return 0;
}