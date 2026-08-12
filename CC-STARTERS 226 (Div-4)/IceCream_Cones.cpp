#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        if (x > y * n) {
            cout << x - (y * n) << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}