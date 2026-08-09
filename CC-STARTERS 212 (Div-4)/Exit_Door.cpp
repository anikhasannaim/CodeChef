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

        int ans = 0;
        int pr = n;
        for (int i = 0; i < n; i++) {
            auto it = find(a.begin(), a.end(), pr);
            int idx = distance(a.begin(), it);
            if (idx <= a.size() - idx - 1) {
                ans += idx;
            } else {
                ans += (a.size() - idx - 1);
            }
            a.erase(it);
            pr--;
        }
        cout << ans << '\n';
    }
    return 0;
}