#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;

        if (n > m) {
            cout << (n - m) * a + m * c << '\n';
        } else {
            cout << (m - n) * b + n * c << '\n';
        }
    }
    return 0;
}