#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int mx = 0;
        for (int i = 0; i < n - 1; i++) {
            int min = (v[i] > v[i + 1]) ? v[i + 1] : v[i];
            mx = max(min, mx);
        }
        cout << mx << '\n';
    }
    return 0;
}