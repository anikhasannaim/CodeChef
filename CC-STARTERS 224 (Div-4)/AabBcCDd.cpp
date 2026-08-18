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

        for (auto &x : s) {
            x = tolower(x);
        }

        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        set<pair<int, char>> st;
        for (auto [x, y] : mp) {
           st.insert({y, x});
        }

        if (st.size() == 1) {
            cout << st.begin()->first << '\n';
            continue;
        }
        auto it = st.rbegin();
        it++;
        cout << it->first + st.rbegin()->first << '\n';
    }
    return 0;
}