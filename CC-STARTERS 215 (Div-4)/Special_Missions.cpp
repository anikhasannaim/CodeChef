#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s;
        cin >> s;

        int sum1 = 0, sum0 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                sum1 += a[i];
            } else {
                sum0 += a[i];
            }
        }
        if (sum0 >= c) {
            cout << max(sum0, (sum1 + sum0 -c)) << '\n';
        } else {
            cout << sum0 << '\n';
        }
        // cout << sum0 << " " << sum1 ;
    }
    return 0;
}