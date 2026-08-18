#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll B, G, X, Y, N;
        cin >> B >> G >> X >> Y >> N;

        if (X + Y > N || G < Y || B < X) {
            cout << -1 << '\n';
            continue;
        }
        ll mx = min((B / X),(G / Y));
        ll fx = ceil((double)(B + G ) / N); //ceil(a / b) = (a + b - 1) / b;

        if ( fx <= mx ) {
            cout << fx << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}