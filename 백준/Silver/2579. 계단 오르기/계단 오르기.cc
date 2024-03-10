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
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n + 1);
    v.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = v[1];
    dp[2] = dp[1] + v[2];

    for (int i = 3; i <= n; i++)
    {
        dp[i] = max((dp[i - 2] + v[i]), (dp[i - 3] + v[i - 1] + v[i]));
    }
    cout << dp.back();

    return 0;
}