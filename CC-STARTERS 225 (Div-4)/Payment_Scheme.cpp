#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>> x;

    int val = 100 + 4*x;

    if(val < 300)
    {
        cout << val ;
    }
    else
    {
        cout << 300 ;
    }
    return 0;
}