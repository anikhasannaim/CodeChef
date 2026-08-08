#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while(t--)
    {
    int n;
    cin>> n;
    vector<int> v(n+1);
    for(int i=1 ; i<=n ;i++)
    {
        cin>> v[i];
    }

    int cnt=0;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=i+1 ; j<=n ; j++)
        {
            if(v[i]-v[j]==i-j)
            {
                cnt++;
            }
        }
    }
    cout<< cnt << '\n';
}
    return 0;
}