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
        vector<int> v(n);
        double sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        double avg = sum / n;
        // cout << avg << '\n' ;
        multiset<int> ml;
        for (int i = 0; i < n; i++) {
            ml.insert(v[i]);
        }
        while (n > 0) {
            if (*ml.begin() < avg) {
                sum -= *ml.begin();
                ml.erase(ml.begin());
                
                n--;
                avg = (sum) / n;
            } else {
                break;
            }
        }
        cout << ml.size() << '\n';
    }
    return 0;
}