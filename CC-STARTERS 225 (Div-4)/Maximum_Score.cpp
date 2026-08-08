#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int A[n];
        int B[n];
        for(int i = 0 ; i<n ;i++)
        {
            cin>> A[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            cin>> B[i];
        }

        int s[n];
        for(int i=0 ; i<n ; i++)
        {
            s[i] = (A[i]-B[i]);
        }

        int idx;
        int min = INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            if(min > s[i])
            {
                swap(min,s[i]);
                idx = i;
            }
        }

        swap(A[idx],B[idx]);
        
        int sum=0;
        for(int i=0 ; i<n ; i++)
        {
            sum=sum+A[i];
        }
        cout<< sum << endl;
    }
    return 0;
}