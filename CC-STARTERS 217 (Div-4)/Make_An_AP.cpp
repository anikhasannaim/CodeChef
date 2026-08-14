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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int d = a[1] - a[0];
        for (int i = 1; i < n - 1; i++) {
            d = __gcd(d, (a[i + 1] - a[i]));
        }
        int nterm = ((*a.rbegin() - *a.begin()) / d) + 1;
        cout << nterm - n << '\n';
    }
    return 0;
}