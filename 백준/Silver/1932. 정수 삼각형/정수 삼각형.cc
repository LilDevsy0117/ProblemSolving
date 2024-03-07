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
    vector<int> temp;
    int x;
    cin >> x;
    temp.push_back(x);

    for (int i = 2; i <= n; i++)
    {
        vector<int> dp;
        for (int j = 0; j < i; j++)
        {
            cin >> x;
            dp.push_back(x);
        }
        dp[0] += temp[0];
        dp[i - 1] += temp.back();
        for (int j = 1; j < i - 1; j++)
        {
            dp[j] += max(temp[j - 1], temp[j]);
        }
        temp = dp;
    }
    cout << *max_element(temp.begin(), temp.end());

    return 0;
}