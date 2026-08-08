#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A == B) {
            cout << 0 << '\n';
            continue;
        }

        int cnt = 1;

        while (1) {
            int x = __gcd(A, C);
            int y = __gcd(B, C);

            if (x == y) {
                cout << cnt << '\n';
                break;
            }

            C++;
            cnt++;
        }
    }

    return 0;
}