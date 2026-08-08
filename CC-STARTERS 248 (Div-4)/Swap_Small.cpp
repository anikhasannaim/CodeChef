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

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (v[j] + v[j + 1] <= 2) {
                    if (v[j] < v[j + 1])
                        ;
                    else
                        swap(v[j], v[j + 1]);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}