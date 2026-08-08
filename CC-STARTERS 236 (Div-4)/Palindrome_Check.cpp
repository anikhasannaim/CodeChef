#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>> t;
    while (t--) {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    v.erase(remove(v.begin(), v.end(), k), v.end());

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i];
    // }
    vector<int> rv;
    rv = v;
    reverse(rv.begin(), rv.end());

    cout << ((rv == v) ? "Yes" : "No") << '\n';
    }
    return 0;
}