#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string sub;
            sub = s.substr(i, j - i + 1);
            if (sub.size() % 2 == 0) continue;

            int ans = 0;
            for (int k = 0; k < sub.size(); k++) {
                if (k % 2 == 1) {
                    if (sub[k] == 'w') {
                        ans++;
                    }
                } else {
                    if (sub[k] == 'u' || sub[k] == 'o') {
                        ans++;
                    }
                }
            }
            if (ans == sub.size()) {
                mx = max(ans, mx);
            }
        }
    }
    cout << mx << '\n';
    }
    return 0;
}