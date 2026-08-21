#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll r = 0, sum = 0, cnt = 0;
        bool ok = true;

        while (r < n) {
            sum += a[r];
            if (sum <= k) {
                cnt++;
            }
            if (sum > k && ok == true) {
                sum -= a[r];
                ok = false;
                cnt++;
            }
            r++;
        }
        cout << cnt << '\n';
    }
    return 0;
}