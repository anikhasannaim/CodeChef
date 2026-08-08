#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin>> x;
        s.insert(x);
    }

    auto it = s.begin();
    it ++;
    // auto lt = --s.end();
    if (*it == *s.begin() || *it == *s.rbegin()) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}
    return 0;
}