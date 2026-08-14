#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int Z = 0, O = 0;
        for (auto x : s) {
            if (x == '0') {
                Z++;
            } else {
                O++;
            }
        }
        vector<int> a(n,-1);
        int cZERO = 0, cONE = 0;
        for (int i = 0; i < n - k; i++) {
            if (a[i] == -1) {
                a[i] = 1;
                a[i + k] = 0;
                cZERO++, cONE++;
            } else if (a[i] == 0) {
                a[i + k] = 1;
                cONE++;
            } else if (a[i] == 1) {
                a[i + k] = 0;
                cZERO++;
            }
        }
        int mxZ = (n - cZERO);
        int mnZ = cZERO;

        if (Z >= mnZ && Z <= mxZ) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}