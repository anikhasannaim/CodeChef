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

        if (n % 3 == 0) {
            cout << 0 << '\n';
        } else if ((n + 1) % 3 == 0){
            cout << 1 << '\n';
        } else {
            if (((n / 5) + 1) % 3 == 0) {
                cout << 1 << '\n';
            } else {
                cout << 2 << '\n';
            }
        }
    }
    return 0;
}