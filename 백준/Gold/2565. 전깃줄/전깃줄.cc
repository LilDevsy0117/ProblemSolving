#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end());
    vector<int> dp(N, 1);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i][1] > v[j][1])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << N - *max_element(dp.begin(), dp.end());

    return 0;
}