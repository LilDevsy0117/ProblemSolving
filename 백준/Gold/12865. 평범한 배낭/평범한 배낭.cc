#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector<vector<int>> dp(N, vector<int>(K + 1));
    int answer = 0;

    for (int i = 0; i < N; i++)
    {
        int w, v;
        cin >> w >> v;
        for (int j = 0; j <= K; j++)
        {
            if (w > j)
            {
                if (i == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
            else
            {
                if (i == 0)
                {
                    dp[i][j] = v;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], v + dp[i - 1][j - w]);
                }
            }

            answer = max(answer, dp[i][j]);
        }
    }

    cout << answer;

    return 0;
}