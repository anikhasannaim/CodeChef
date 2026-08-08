#include <bits/stdc++.h>
using namespace std;
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, A, B;
    cin >> x >> y >> A >> B;

    if (x > A) {
        cout << "Alice"; 
    } else if (x < A) {
        cout << "Bob";
    }

    else if (x == A && y > B) {
        cout << "Alice";
    } else if (x == A && y < B){
        cout << "Bob";
    }

    else if (x == A && y == B) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    return 0;
}