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
    vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>> v[i];
    }

    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());

    // cout<< mn << mx ;
    v.erase(remove(v.begin(),v.end(),mn),v.end());
    v.erase(remove(v.begin(),v.end(),mx),v.end());
    
    cout<< v.size() << endl;
}
    return 0;
}