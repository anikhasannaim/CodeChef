#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    if ((n/2)+1 <= k) {
        cout << 0;
    } else {
        cout << (n/2 + 1)-k ;
    }
    return 0;
}