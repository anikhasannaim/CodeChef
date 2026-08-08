#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y;
    cin >> x >> y;

    int j = (x > y) ? y : x;
    cout << j * j << endl;
    return 0;
}