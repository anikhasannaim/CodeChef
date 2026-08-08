#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        string s;
        cin >> s;

        // for R
        int cntL = 0, cntR = 0;
        for (int i = p - 1; i < n; i++) {
            if (s[i] == 'L') {
                cntL++;
            }
        }
        // for L
        for (int i = p - 1; i >= 0; i--) {
            if (s[i] == 'R') {
                cntR++;
            }
        }
        cout << min(cntR, cntL) << endl;
    }
    return 0;
}