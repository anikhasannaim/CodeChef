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

    vector<int> a(n + 1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        mp[a[i]] = i;
    }

    int r = 1, cnt = 0;

    vector<pair<int, int>> p;
    while (r <= n) {

        if (a[r] != r) {
            int idx = mp[r];
            p.push_back({a[r], a[idx]});
            mp[a[r]] = idx;
            swap(a[r], a[mp[r]]);
            cnt++;
        }
        r++;
    }

    cout << cnt << '\n';
    for (auto [x , y] : p) {
        cout << x << " " << y << '\n';
    }
}
    return 0;
}