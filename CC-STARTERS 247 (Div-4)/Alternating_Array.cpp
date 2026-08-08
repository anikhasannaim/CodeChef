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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 0;
        int cnt1 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] % 2 != 0) {
                    cnt++;
                }
            } else {
                if (v[i] % 2 == 0) {
                    cnt++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] % 2 == 0) {
                    cnt1++;
                }
            } else {
                if (v[i] % 2 != 0) {
                    cnt1++;
                }
            }
        }

        cout << min(cnt, cnt1) << endl;
    }
    return 0;
}