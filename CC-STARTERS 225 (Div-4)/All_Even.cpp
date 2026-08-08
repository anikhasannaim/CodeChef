#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n];
        bool even = true;
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        while (n >= 2)
        {
            even = true;
            l[n - 2] = (l[n - 2] + l[n - 1]);
            n--;
            for (int i = 0; i < n; i++)
            {
                if (l[i] % 2 != 0)
                {
                    even = false;
                }
            }
        }
        if (even)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}