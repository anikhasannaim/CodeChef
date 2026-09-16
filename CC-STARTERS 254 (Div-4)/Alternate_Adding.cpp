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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++) {

            if (a[i + 1] < 0 && i + 1 < n) {

                if (i + 2 != n) {
                    int sum = ((a[i] + a[i + 2]) + a[i + 1]);
                    if (sum < 0) {
                        cnt += ((a[i] + a[i + 2]) + abs(sum));
                    } else {
                        cnt += (a[i] + a[i + 2]);
                    }
                    a[i] = 0;
                    a[i + 2] = 0;
                    a[i + 1] = 0;
                } else {
                    cnt += max(a[i] ,abs( a[i + 1]));
                    a[i] = 0;
                    a[i + 1]= 0;
                }

            } else {
                cnt += abs(a[i]);
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}