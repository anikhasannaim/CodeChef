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

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        if (even > odd) {
            cout << odd * 2 + 1 << '\n';
        } else if (even < odd){
            cout << even * 2 + 1 << '\n';
        } else {
            cout << odd * 2 << '\n';
        }
    }
    return 0;
}