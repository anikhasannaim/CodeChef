#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        string s;
        cin >> s;

        for (int i = N - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                s.erase(i, 1);
                A.erase(A.begin() + i);
            }
        }
        sort(A.begin(), A.end());
        // sort(s.begin(),s.end());
        if (s.size() < K)
        {
            cout << -1 << endl;
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < K; i++)
            {
                sum += A[i];
            }
            cout << sum << endl;
        }
    }

    return 0;
}