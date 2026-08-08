#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int y = x - 20;

        if (x <= 20) {
            cout << x * 10 << '\n';
        } else {
          
            cout << 200 + (y / 2) * 5 << '\n';
        }
    }
    return 0;
}