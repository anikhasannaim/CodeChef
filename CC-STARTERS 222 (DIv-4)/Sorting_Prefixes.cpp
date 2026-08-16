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
        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        c = a;
        sort(c.begin(), c.end());
        // for (int x : c) {
        //     cout << x << " ";
        // }

        int idx = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (c[i] != a[i]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            cout << 0 << '\n';
        } else {
            cout << a[idx] << '\n';
        }
    }
    return 0;
}