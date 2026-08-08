#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;

        if (n > p)
        {
            cout << n - p << endl;
            continue;
        }
        if ((p - n) % 2 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << 1 << endl;
            continue;
        }
    }
    return 0;
}