#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int n;
    cin >> n;
    // map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        // mp[x]++;
    }
    // int ans = 0;
    // for (auto [x, y] : mp) {
    //     ans += y;
    // }
    cout << s.size() << '\n';
}
    return 0;
}