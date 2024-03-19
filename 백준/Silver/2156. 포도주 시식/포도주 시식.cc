#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(n);
    dp[0] = v[0];
    dp[1] = v[0] + v[1];
    dp[2] = max(max(v[1] + v[2], v[0] + v[2]), dp[1]);
    for (int i = 3; i < n; i++)
    {
        dp[i] = max(max(dp[i - 3] + v[i - 1], dp[i - 2]) + v[i], dp[i - 1]);
    }
    cout << dp.back();
    return 0;
}