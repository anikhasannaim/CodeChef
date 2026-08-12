#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        int k = max(0, s - 5 * n);
        int ans = 6 * n - k;
        cout << ans << '\n';
    }
    return 0;
}