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

        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        deque<pair<int, char>> p;
        for (auto [x, y] : mp) {
            p.push_back({y, x});
        }
        sort(p.rbegin(), p.rend());

        bool ok = true;
        for (auto x : p) {

            if (x.first > 2) {
                ok = false;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}