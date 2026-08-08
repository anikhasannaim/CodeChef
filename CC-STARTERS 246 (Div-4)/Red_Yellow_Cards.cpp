#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int R, Y;
        cin >> R >> Y;

        cout << R + max(0, (Y - R)) / 2 << '\n';
    }
    return 0;
}