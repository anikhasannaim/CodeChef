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
        string a, b;
        cin >> a >> b;
        int an = 0, bn = 0;
        for (int i = 0; i < n; i++) {
            if ( 'a' == a[i]) {
                an++;
            }
        }

        
        for (int i = 0; i < n; i++) {
            if ('b' == b[i]) {
                bn++;
            }
        }

        if (an == bn) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        // cout << an << " " << bn << '\n';
    }
    return 0;
}