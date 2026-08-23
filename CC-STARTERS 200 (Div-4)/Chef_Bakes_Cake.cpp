#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, y;
    cin >> n >> x >> y;

    int z = ceil(((float)n / (y / x)));
    cout << z << '\n';
    return 0;
}