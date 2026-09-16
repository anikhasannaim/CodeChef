#include <bits/stdc++.h>
using namespace std;
using ll = long long;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {

    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.rbegin(), a.rend());

    vector<ll> pr(n);
    pr[0] = a[0];
    for(int i = 1 ; i < n; i++) {
        pr[i] = a[i] + pr[i - 1];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {

        ll x = (pr[i] * (n - i - 1)) + ((sum - pr[i]) * (i + 1));
        ans = max(x, ans);

    }
    cout << ans << '\n';

    // for (int x : pr) {
    //     cout << x << " ";
    // }

    }

    return 0;
}