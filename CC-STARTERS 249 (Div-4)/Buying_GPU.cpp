#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        int earn = 0;
        int curp = x;
        if (y >= z) {
            cout << -1 << '\n';
            continue;
        }
        int cnt = 0;
        while(true) {
            curp += y;
            earn += z;
            cnt++;
            if (curp <= earn) {
                
                cout << cnt << '\n';
                break;
            }
        }
    }
    return 0;
}