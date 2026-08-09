#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt00 = 0, cnt11 = 0, cnt000 = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '0') {
                cnt00++;
            }
            if (s[i] == '1' && s[i + 1] == '1') {
                cnt11++;
            }
        }

        if (cnt00 <= cnt11) {
            cout << 0 << '\n';
        } else {
            cout << (cnt00 - cnt11 + 1) / 2 << '\n';
        }
    }
    return 0;
}