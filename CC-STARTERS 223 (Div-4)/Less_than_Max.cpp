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
        vector<int> cnt(n + 1);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1 || cnt[x - 1] > 0) {
                cnt[x]++;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}