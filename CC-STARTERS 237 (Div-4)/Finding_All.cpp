#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x = 0;
    for (int i = 0; i < n; i++) {
        if (x < v[i]) {
            x = -1;
        } else if (x > v[i]) {
            x = 1;
        } else {
            x = 0;
        }
    }
    cout << x << '\n';
    return 0;
}