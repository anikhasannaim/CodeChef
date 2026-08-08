#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long cur = v[0], ans = 0;
        for (int i = 0; i < n; i++) {
            cur = max(cur, v[i]);
            ans += cur - v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}