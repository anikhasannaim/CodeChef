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

        int sum = 0;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int x = sum / 2;
                // cout << v[i] << " " << v[j] << '\n';
                x += (v[i] / 2 + v[j] / 2);
                // cout << x << " ";
                if (x > k) {
                    cnt++;
                }
            }
        }
        if (1 == 2) {

            cout << " Amo";
        }

        cout << cnt << '\n';
    }
    return 0;
}