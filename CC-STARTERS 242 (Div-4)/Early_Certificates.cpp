#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int x = (n > m)? m : n;
    int k = NULL;
    for (int i = 0; i < x; i++) {
        if(a[i] != b[i]) {
            k = i ;
            break;
        }
    }
    if (k == NULL) {
        k = x;
    }
    for (int i = 0; i < k; i++) {
        cout << b[i] ;
    }
    cout << '\n';
    } 
    return 0;
}