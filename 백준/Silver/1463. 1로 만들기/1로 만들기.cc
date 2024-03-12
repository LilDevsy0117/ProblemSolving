#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
#include <queue>
#include <deque>
#include <sstream>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        if (i % 6 == 0)
        {
            dp[i] = min(min(dp[i / 3] + 1, dp[i - 1] + 1), dp[i / 2] + 1);
        }
        else if (i % 3 == 0)
        {
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
        }
        else if (i % 2 == 0)
        {
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
        }
        else
        {
            dp[i] = dp[i - 1] + 1;
        }
    }
    cout << dp[n];

    return 0;
}