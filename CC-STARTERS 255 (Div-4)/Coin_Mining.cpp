#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int g = 0;
        int income = 0;
        int cnt = 0;
        int ans = 0;
        while (true) {

            g++;
            income = (g * y * g) - x;

            ans += income;
            cnt++;
            if (ans >= 0) {
                break;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}