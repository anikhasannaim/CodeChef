#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l ; i <= r; i++) {
        if (i % 2 == 0) {
            cnt++;
        }
    }
    if (cnt!= 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}