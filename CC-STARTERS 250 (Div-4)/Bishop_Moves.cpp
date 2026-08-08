#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (abs(x1-y1) == abs(x2-y2)) {
        cout << 1 << '\n';
    } else if (x1 + y1 == x2 + y2) {
        cout << 1 << '\n';
    } else if ((x1 + x2 + y1 + y2) % 2 != 0) {
        cout << -1 << '\n';
    } else {
        cout << 2 << '\n';
    }
}
    return 0;
}