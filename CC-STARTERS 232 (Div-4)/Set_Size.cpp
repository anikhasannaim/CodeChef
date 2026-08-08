#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (m--)
    {
        int x;
        cin >> x;

        map<int, int> mp;
        for (int j = 0; j < x; j++)
        {
            for (int i = 0; i < n; i++)
            {
                mp[v[i]++];
            }
        }
        cout << mp.size() << '\n';
    }
    return 0;
}