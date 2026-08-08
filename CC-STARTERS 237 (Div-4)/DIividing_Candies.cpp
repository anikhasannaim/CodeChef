#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int n, x;
    cin >> n >> x;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int y; cin >> y;
        if (y % x == 0) {
            s.insert(y);
        } else {
            s.insert(0);
        }
    }
    cout << *s.rbegin() << '\n';
}
    return 0;
}