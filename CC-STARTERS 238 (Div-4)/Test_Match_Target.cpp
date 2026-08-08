#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, z;
    cin >> x >> y >> z;
    int sum = x + z;
    if (sum >= y) {
        cout << sum - y + 1;
    } else {
        cout << 0;
    }
    return 0;
}