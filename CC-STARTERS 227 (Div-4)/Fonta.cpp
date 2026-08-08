#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    if(s[s.size()-1]=='a' && s[s.size()-2]=='t' && s[s.size()-3]=='n')
    {
        cout<< "Yes" << endl;
    }
    else
    {
        cout<< "No" << endl;
    }
    return 0;
}