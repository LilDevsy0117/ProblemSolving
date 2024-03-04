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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> dp;
    dp.push_back(v[0]);
    int answer = v[0];
    for (int i = 1; i < n; i++)
    {
        dp.push_back(max(dp.back() + v[i], v[i]));
        if (dp.back() > answer)
        {
            answer = dp.back();
        }
    }

    cout << answer;
    return 0;
}