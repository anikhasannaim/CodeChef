#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            s.insert(k);
        }
        auto mx = s.rbegin();
        auto mn = s.begin();
        auto it = find(s.begin(), s.end(), x);
        if (it == s.end()) {
            if (*mx < x) {
                cout << "Yes\n";
            } else if (*mn > x) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}