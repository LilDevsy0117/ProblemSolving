#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(3);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int tmep0 = dp[0];
        int tmep1 = dp[1];
        int tmep2 = dp[2];
        dp[0] = a + min(tmep1, tmep2);
        dp[1] = b + min(tmep0, tmep2);
        dp[2] = c + min(tmep0, tmep1);
        // cout << dp[0] << " " << dp[1] << " " << dp[2] << "\n";
    }

    sort(dp.begin(), dp.end());
    cout << dp[0];

    return 0;
}