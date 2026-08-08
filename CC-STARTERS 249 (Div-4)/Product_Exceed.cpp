#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, y, p;
        cin >> x >> y >> p;

        
        int cnt = 0;
        while(true) {
            long long k = x * y;
            if (p <= k) {
                cout << cnt << '\n';
                break;
            } else {
                long long a = (x + 1) * y;
                long long b = (y + 1) * x;
                if (a > b) {
                    x++;
                    cnt++;
                } else {
                    y++;
                    cnt++;
                }
            }
        }
    }
    return 0;
}