#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        bool find = false;
        for (int i = 0; i < n; i++){
            set<int> s;
            for (int j = 0; j < n; j++){
                if (j < i){
                    s.insert(v[i] + v[j]);
                }
                else{
                    s.insert(v[j] - v[i]);
                }
            }
            if (s.size() == 1){
                cout << "Yes" << endl;
                find = true;
                break;
            }
        }
        if (find == false){
            cout << "No" << '\n';
        }
    }
    return 0;
}