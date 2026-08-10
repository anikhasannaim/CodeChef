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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans = 0;
        if (mp[2] >= 2) {
            int y = mp[2];
            ans += (y - 1);
        }

        if (mp[3] != 0 && mp[1] != 0) {
            if (mp[3] > mp[1]) {
                ans += mp[1];
            } else {
                ans += mp[3];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}