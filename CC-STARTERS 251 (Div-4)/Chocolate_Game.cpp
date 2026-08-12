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
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int Al = 0, Bb = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (sum % 2 == 0) {
                if (a[i] % 2 == 0) {
                    Al += a[i];
                    sum -= a[i];
                } else {
                    Al += (a[i] - 1);
                    sum -= (a[i] - 1);
                    cnt++;
                }
            } else {
                if (a[i] % 2 == 0) {
                    Bb += a[i];
                    sum -= a[i];
                } else {
                    Bb += (a[i] - 1);
                    sum -= (a[i] - 1);
                    cnt++;
                }
            }
        }
        Al += (cnt / 2);
        cout << Al << '\n';
    }
    return 0;
}