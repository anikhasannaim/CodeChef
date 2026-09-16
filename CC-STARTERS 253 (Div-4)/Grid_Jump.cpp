#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        int x, y, p, q, r;
        cin >> x >> y >> p >> q >> r;

        int sx = 0;
        if (x % 2 == 0) {
            sx = ((x / 2) * p);
        } else {
            sx = ((x / 2) * p + p);
        }

        int sy = 0;
        if (y % 2 == 0) {
            sy = ((y / 2) * q);
        } else {
            sy = ((y / 2) * q + q);
        }

        int axy = sx + sy;
        int ar = 0;

        if (x > y) {
            int ay = y * r;
            x = x-y;
            int s = 0;
            if (x % 2 == 0) {
                s = ((x / 2) * p);
            } else {
                s = ((x / 2) * p + p);
            }
            ay += s;
            if (ay < axy) {
                cout << ay << '\n';
                continue;
            }
        } else if (x < y) {
            int ax = x * r;
            y = y-x;
            int s = 0;
            if (y % 2 == 0) {
                s = ((y / 2) * q);
            } else {
                s = ((y / 2) * q + q);
            }
            ax += s;
            if (ax < axy) {
                cout << ax << '\n';
                continue;
            }

        } else if (x == y) {
            ar = x * r;

            if (ar < axy) {
                cout << ar << '\n';
                continue;
            }
        }
        cout << axy << '\n';
    }
    return 0;
}