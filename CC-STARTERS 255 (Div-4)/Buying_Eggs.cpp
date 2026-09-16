#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, f;
    cin >> x >> y >> f;

    int ans1 = x * 12, ans2 = y * 12 + f;
    if (ans1 > ans2 ) {
        cout << ans2;
    
    } else {
        cout << ans1;
    }
    return 0;
}