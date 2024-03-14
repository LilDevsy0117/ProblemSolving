#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<vector<int>> v;
vector<vector<int>> check;
int max_v = -10000001;

void go(int z, int sum)
{
    if (z == k)
    {
        max_v = max(max_v, sum);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check[i][j] == 0)
            {
                if (i - 1 >= 0)
                {
                    check[i - 1][j]++;
                }
                if (i + 1 < n)
                {
                    check[i + 1][j]++;
                }
                if (j - 1 >= 0)
                {
                    check[i][j - 1]++;
                }
                if (j + 1 < m)
                {
                    check[i][j + 1]++;
                }
                check[i][j]++;
                go(z + 1, sum + v[i][j]);
                check[i][j]--;
                if (i - 1 >= 0)
                {
                    check[i - 1][j]--;
                }
                if (i + 1 < n)
                {
                    check[i + 1][j]--;
                }
                if (j - 1 >= 0)
                {
                    check[i][j - 1]--;
                }
                if (j + 1 < m)
                {
                    check[i][j + 1]--;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    v.resize(n, vector<int>(m));
    check.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    go(0, 0);
    cout << max_v;

    return 0;
}