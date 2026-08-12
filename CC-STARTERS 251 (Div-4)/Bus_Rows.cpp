#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;

        int cnt = 0;
        int k = 0;
        while (true) {
            k += m;
            if (k < x) {
                cnt++;
            } else {
                cnt++;
                break;
            }
        }

        int f = cnt, b = n - cnt + 1;
        cout << min(f, b) << '\n';
    }
    return 0;
}