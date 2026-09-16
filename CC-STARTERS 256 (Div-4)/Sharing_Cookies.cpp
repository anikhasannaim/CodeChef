#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int A, B;
    cin >> A >> B;

    if ((A + B) % 2 == 0) {
        cout << (A + B) / 2 - B ;
    } else {
        cout << -1;
    }
    return 0;
}