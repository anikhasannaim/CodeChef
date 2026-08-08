#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0, r = n - 1;
        // Valid range for X is [lo, hi) (hi exclusive). Start as "everything".
        long long lo = LLONG_MIN;
        long long hi = LLONG_MAX;
        bool ok = true;
        while (l < r) {
            int diff = abs(a[l] - a[r]);
            if (diff == 2) {
                int mn = min(a[l], a[r]);
                int mx = max(a[l], a[r]);
                // Need X >= mn (so the smaller one increases)
                // and X < mx (so the larger one decreases)
                lo = max(lo, (long long)mn);
                hi = min(hi, (long long)mx);
                if (lo >= hi) {
                    ok = false;
                    break;
                }
            } else if (diff == 0) {
                // no constraint on X from this pair
            } else {
                ok = false;
                break;
            }
            l++;
            r--;
        }
        if (ok) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}