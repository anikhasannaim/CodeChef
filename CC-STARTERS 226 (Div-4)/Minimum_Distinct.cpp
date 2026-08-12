#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> mp;
        for (int i = 1; i < n; i++) {
            mp[a[i]]++;
        }
        vector<int> tr;
        for (auto [x, y] : mp) {
            if (x != a[0]) {
                tr.push_back(y);
            }
        }
        sort(tr.begin(), tr.end());
        // for (auto [x, y] : mp) {
        //     cout << x << " " << y <<'\n';
        // }

        int cnt = 0;
        // for (int i = 0; i < tr.size(); i++) {
        //     k -= tr[i];
        //     if (k >= 0) {
        //         cnt++;
        //     }
        //     if (k <= 0) {
        //         break;
        //     }
        // }
        for (int x : tr) {
            if (k < x)
                break;

            k -= x;
            cnt++;
        }
        cout << tr.size() - cnt + 1 << '\n';
    }
    return 0;
}