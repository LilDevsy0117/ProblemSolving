#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (v[j] < v[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end());

    return 0;
}