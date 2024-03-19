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
        v[i] = i;
    }
    vector<vector<int>> vv(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vv[i][j];
        }
    }
    int m = 100000000;
    do
    {
        int s = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (vv[v[i]][v[0]] == 0)
                {
                    flag = false;
                    break;
                }
                s += vv[v[i]][v[0]];
            }
            else
            {
                if (vv[v[i]][v[i + 1]] == 0)
                {
                    flag = false;
                    break;
                }
                s += vv[v[i]][v[i + 1]];
            }
        }
        if (flag)
        {

            m = min(m, s);
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << m;

    return 0;
}