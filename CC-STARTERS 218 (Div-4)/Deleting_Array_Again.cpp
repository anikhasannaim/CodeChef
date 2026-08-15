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

        vector<int> A(n), C(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> C[i];
        }

        deque<int> M;
        for (int i = 0; i < n; i++) {
            int mn = *min_element(C.begin(), C.end());
            M.push_front(mn);
            C.pop_back();
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (A[i] * M[i]);
        }

        cout << ans << '\n';
    }
    return 0;
}