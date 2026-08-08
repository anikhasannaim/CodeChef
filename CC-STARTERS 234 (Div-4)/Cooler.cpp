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
        int m ,n;
        cin>> m >> n;

        cout<< (m*(m+1)/2)-(n*(n+1)/2) << "\n";
    }

    return 0;
}