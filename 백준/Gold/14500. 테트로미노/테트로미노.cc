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

int n, m;
vector<int> dx = {-1, 1, 0, 0};
vector<int> dy = {0, 0, 1, -1};
vector<vector<int>> vv;
vector<vector<bool>> check;
int answer = 0;
void go(int z, int a, int b, int s)
{
    if (z == 4)
    {
        answer = max(answer, s);
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int next_a = a + dx[i];
            int next_b = b + dy[i];
            if ((next_a >= 0 && next_a < n) && (next_b >= 0 && next_b < m))
            {
                if (!check[next_a][next_b])
                {
                    check[next_a][next_b] = true;
                    go(z + 1, next_a, next_b, s + vv[next_a][next_b]);
                    check[next_a][next_b] = false;
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

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> t;
        vector<bool> k;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            t.push_back(x);
            k.push_back(false);
        }
        vv.push_back(t);
        check.push_back(k);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            check[i][j] = true;
            go(1, i, j, vv[i][j]);
            check[i][j] = false;
        }
    }

    for (int i = 0; i + 2 < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j - 1 >= 0)
            {
                answer = max(answer, vv[i][j] + vv[i + 1][j] + vv[i + 2][j] + vv[i + 1][j - 1]);
            }
            if (j + 1 < m)
            {
                answer = max(answer, vv[i][j] + vv[i + 1][j] + vv[i + 2][j] + vv[i + 1][j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + 2 < m; j++)
        {
            if (i - 1 >= 0)
            {
                answer = max(answer, vv[i][j] + vv[i][j + 1] + vv[i][j + 2] + vv[i - 1][j + 1]);
            }
            if (i + 1 < n)
            {
                answer = max(answer, vv[i][j] + vv[i][j + 1] + vv[i][j + 2] + vv[i + 1][j + 1]);
            }
        }
    }

    cout << answer;

    return 0;
}