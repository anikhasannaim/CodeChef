#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        int sum = 1;
        while (true) {
            sum += x;
            if (sum > n) {
                cout << sum - x << endl;
                break;
            }
        }
       
    }
    return 0;
}