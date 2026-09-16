#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int x = (n / 10) + 1;
    cout << x * 10 - n << '\n';
    return 0;
}