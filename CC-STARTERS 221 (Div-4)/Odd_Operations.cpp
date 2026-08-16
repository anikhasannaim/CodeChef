#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int num = n;
        vector<int> digits;
        int cnt = 0;
        while (num > 0) {
            int x = num % 10;
            digits.push_back(x);
            if (x % 2 != 0) {
                cnt++;
            }
            num /= 10;
        }

        if (n % 2 != 0) {
            cout << 0 << '\n';
        } else if (cnt > 0) {
            cout << 1 << '\n';
        } else if (digits.size() == 1) {
            cout << -1 << '\n';
        } else if (*max_element(digits.begin(), digits.end()) == (n % 10)) {
            cout << 3 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}