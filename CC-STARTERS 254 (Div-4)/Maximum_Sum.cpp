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

        deque<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        while (k--) {
            if (*a.rbegin() > *a.begin()) {
                a.pop_front();
            } else {
                a.pop_back();
            }
        }

        int sum = 0;
        for (auto x : a) {
            sum += x;
            cout << x << " ";
        }

        // cout << sum << '\n';
    }

    return 0;
}