#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> vv;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        vv.push_back(v);
    }
    int min_v = 500000000;
    for (int i = 1; i <= n / 2; i++)
    {
        vector<bool> check(n - i, false);
        check.insert(check.end(), i, true);

        do
        {
            vector<int> start;
            vector<int> link;
            for (int j = 0; j < n; j++)
            {
                if (check[j])
                {
                    start.push_back(j);
                }
                else
                {
                    link.push_back(j);
                }
            }
            int a = 0, b = 0;
            for (int j = 0; j < start.size() - 1; j++)
            {
                for (int k = j + 1; k < start.size(); k++)
                {
                    a += vv[start[j]][start[k]];
                    a += vv[start[k]][start[j]];
                }
            }
            for (int j = 0; j < link.size() - 1; j++)
            {
                for (int k = j + 1; k < link.size(); k++)
                {
                    b += vv[link[j]][link[k]];
                    b += vv[link[k]][link[j]];
                }
            }
            min_v = min(min_v, abs(a - b));
        } while (next_permutation(check.begin(), check.end()));
    }
    cout << min_v;
    return 0;
}