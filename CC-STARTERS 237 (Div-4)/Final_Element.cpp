#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<int> A;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A.push_back(x); 
    }
    
    while(1) {
        vector<int> B;
        for (int i = 0; i < A.size()-1; i++) {
        B.push_back(A[i] ^ A[i+1]);
        }
        A = B;
        if (A.size() == 1) break;
    }
    cout<< A[0] << endl;
    }
    return 0;
}
