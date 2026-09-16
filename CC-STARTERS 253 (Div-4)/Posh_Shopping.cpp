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

        vector<int> a(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i < j && a[i] <= a[j]) {
                    ans = max(ans, (a[i] + a[j]));
                }
            }
        }
        if (ans < mx) {
            cout << mx << '\n';
        } else {
            cout << ans << '\n';
        }
    }
    return 0;
}