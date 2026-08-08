#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>> n >> k;

    int x = n*100;
    int y = k+n*60;
    if(x>y)
    {
        cout<< y;
    }
    else
    {
        cout<< x;
    }
    return 0;
}