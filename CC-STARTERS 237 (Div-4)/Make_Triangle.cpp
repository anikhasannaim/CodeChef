#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y <= z ) {
            cout << z - (x + y) + 1 << '\n';
        } 
        else if (y + z <= x) {
            cout << x - (y + z) + 1 << '\n';
        } 
        else if (x + z <= y) {
            cout << y - (z + x) + 1 << '\n';
        } else
        {
            cout << 0 << '\n';
        }
    }
    return 0;
}