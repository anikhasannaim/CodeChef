#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    while(t--){
    
    int n;
    cin>> n;
    string s;
    cin>> s;

    string k;
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]!='?')
        {
            k.push_back(s[i]);
        }
        else
        {
            k.push_back(s[n-i-1]);
        }
    }
    // string rev = k;
    // reverse(rev.begin(),rev.end());
    auto it = find(k.begin(),k.end(),'?');
    if(it==k.end())
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
    }
    }
    return 0;
}