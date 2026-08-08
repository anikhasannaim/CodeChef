#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        int sum1 = 0;
        for (int i = 1; i < l; i++) {
            sum1 += v[i];
        }
        int sum2 = 0;
        for (int i = r + 1; i <= n; i++) {
            sum2 += v[i];
        }
        if (sum1 > sum2) {
            cout << sum1 << '\n';
        } else {
            cout << sum2 << '\n';
        }
    }

    return 0;
}