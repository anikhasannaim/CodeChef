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
        vector<char> a;

        if (n > 5) {
            int t = (n / 5);
            while (t--) {
                a.push_back('a');
                a.push_back('b');
                a.push_back('c');
                a.push_back('d');
                a.push_back('e');
            }
            
            for (int i = 0; i < (n - (n / 5) * 5); i++) {
                char c = 'a' + i;
                a.push_back(c);
            }
        } else {
            for (int i = 0; i < n; i++) {
                char c = 'a' + i;
                a.push_back(c);
            }
        }
        
        for (auto x : a) {
            cout << x ;
        }
        cout << '\n';
    }
    return 0;
}