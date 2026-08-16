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
        string s;
        cin >> s;

        int ans = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt1++;
            } else {
                cnt2++;
            }

            if (cnt1 >= cnt2) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}