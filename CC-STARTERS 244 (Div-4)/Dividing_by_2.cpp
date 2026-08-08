#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++) {
        int x = v[i];
        while (x > 1) {
            x = floor(x / 2.0);
            mp[v[i]].push_back(x);
        }
    }

    // for (auto [x, y] : mp) {
    //     cout << x << "->";
    //     for (int i = 0; i < y.size(); i++) {
    //         cout << y[i] << " ";
    //     }
    //     cout << '\n';
    // }

    int ans = INT_MAX;
    for (int i = 0; i < mp[v[0]].size(); i++) {
        int x = mp[v[0]][i];

        int cnt = 0,f = 0;
        for (int j = 0; j < mp[v[i]].size(); j++) {

            auto it = find(mp[v[i]].begin(), mp[v[i]].end(), x);
            if (it != mp[v[i]].end()) {
                int index = distance(mp[v[i]].begin(), it);
                cnt += index;
            } else {
                f=1;
                break;
            }
        }
        ans = min(ans, cnt);
        if (f == 0) {
            break;
        } else {
            f = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}