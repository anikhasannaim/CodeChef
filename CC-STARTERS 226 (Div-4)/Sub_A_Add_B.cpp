#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (n < a) {
            cout << n << '\n';
        } else {
            int tn = n, ta = a, tb = b;

            while (tn >= ta) {
                tn -= ta;
                tn += tb;
            }
            cout << tn << '\n';
        }
    }
    return 0;
}