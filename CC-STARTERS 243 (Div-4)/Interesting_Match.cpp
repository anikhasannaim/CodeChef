#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    int z = abs(x - y);
    if (z <= 2) {
        cout << "Interesting";
    } else {
        cout << "Boring";
    }
    return 0;
}