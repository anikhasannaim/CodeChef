#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>> n;
    vector<int> v;
    multiset<int> s;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin>> x;
        v.push_back(x);
        s.insert(x);
    }

    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        sum+=v[i];
    }

    // cout<< *s.begin();

    for(int i=0 ; i<n ; i++)
    {
        if(sum<0)
        {
            int x = *s.begin();
            sum-=x;
            auto it = find(v.begin(),v.end(),*s.begin());
            if(it!=v.end())
            {
                v.erase(it);
            }
            s.erase(s.begin());
        }
    }
    cout<< v.size() << '\n';
    }

    return 0;

}