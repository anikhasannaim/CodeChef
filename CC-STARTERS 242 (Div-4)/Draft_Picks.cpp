#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
    int k, n;
    cin >> k >> n;

    vector<int> a(k,0);
    int cnt = 1, x = n;
    int f = n / k;
    f++;
    while(f--) {
        if (cnt % 2 != 0) {
            int j = 0;
            while(j < k && x > 0) {
                
                a[j] += x;
                j++, x--;
            }

        } else {
            
            int j = k-1;
            while(j >= 0 && x > 0) {
                a[j] += x;
                j--, x--;
            }
        }
        cnt++;
    }
    cout << *max_element(a.begin(), a.end()) << '\n';
}

    return 0;
}