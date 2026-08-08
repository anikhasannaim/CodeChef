#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
    int A,B,C;
    cin>> A >> B >> C ;
    if( A%2!=0 && B%2!=0 && C%2!=0)
    {
        cout<< "Yes" << endl;
    }
    else
    {
        cout<< "No" << endl;
    }
}
    return 0;
}