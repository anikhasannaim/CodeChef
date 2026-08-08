#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n = 5;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt30 = 0, cnt60 = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] >= 30) {
                cnt30++;
            }
            if (v[i] >= 60) {
                cnt60++;
            }
        }
        if (cnt30 >= 4 && cnt60 >= 2) {
            cout << "Pass" << '\n';
        } else {
            cout << "Fail" << '\n';
        }
    }
    return 0;
}