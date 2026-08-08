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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int l = 1, r = 2;
        long long ans = 0;

        while (r <= n) {

            if ((a[r] - r + l) >= 0) {
                ans += (a[r] - r + l);
                l = r;
            }
            r++;
        }
        cout << ans << '\n';
    }
    return 0;
}