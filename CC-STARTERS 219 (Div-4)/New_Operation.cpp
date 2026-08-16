#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {

        int n, c;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        b = a;
        c = n;

        n--;
        while (n--) {
            set<pair<int, int>> s;

            for (int i = 0; i < a.size() - 1; i++) {
                s.insert({(a[i] + 2 * a[i + 1]), i});
            }

            a.erase(a.begin() + s.begin()->second,
                    a.begin() + s.begin()->second + 2);
            a.insert(a.begin() + s.begin()->second, s.begin()->first);
        }
        c--;
        while (c--) {
            set<pair<int, int>> s;

            for (int i = 0; i < b.size() - 1; i++) {
                s.insert({(b[i] + 2 * b[i + 1]), i});
            }

            b.erase(b.begin() + s.rbegin()->second,
                    b.begin() + s.rbegin()->second + 2);
            b.insert(b.begin() + s.rbegin()->second, s.rbegin()->first);
        }
        cout << a[0] << " " << b[0] << '\n';
    }
    return 0;
}