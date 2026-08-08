#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int n, x, k;
    cin >> n >> x >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int z;
        cin >> z;
        mp[z]++;
    }
    int sum = 0;
    auto it = mp.rbegin();
    while(k--) {
        sum += it->second;
        it++;
    }
    if (x > sum) {
        cout << sum << '\n';
    } else {
        cout << x << '\n';
    }
}
    return 0;
}