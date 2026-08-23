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

        deque<int> d;
        d.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (a[i] % 2 != *d.rbegin() % 2) {
                d.push_back(a[i]);
            }
        }

        cout << d.size() << '\n';
    }
    return 0;
}