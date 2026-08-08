#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int A,B,X,Y;
        cin>> A >> B >> X >> Y;

        int C = A/X;
        if(C==0)
        {
            cout<< A+B << endl;
        }
        else
        {
            cout<< (Y*C) + (A-X*C) + B << endl;
        }

    }
    return 0;
}