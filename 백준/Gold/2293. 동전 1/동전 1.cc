#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(k + 1);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (j >= v[i])
            {
                dp[j] += dp[j - v[i]];
            }
        }
    }

    cout << dp.back();

    return 0;
}