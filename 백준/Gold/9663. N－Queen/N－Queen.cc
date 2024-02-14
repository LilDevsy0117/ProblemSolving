#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int n;
int answer = 0;
void check0(vector<vector<int>> &vv, int a, int b)
{
    for (int i = a + 1; i < n; i++)
    {
        vv[i][b]--;
    }
    int x, y;
    x = a + 1;
    y = b + 1;
    while (x < n && y < n)
    {
        vv[x][y]--;
        x++;
        y++;
    }
    x = a + 1;
    y = b - 1;
    while (x < n && y >= 0)
    {
        vv[x][y]--;
        x++;
        y--;
    }
}

void check1(vector<vector<int>> &vv, int a, int b)
{
    for (int i = a + 1; i < n; i++)
    {
        vv[i][b]++;
    }
    int x, y;

    x = a + 1;
    y = b + 1;
    while (x < n && y < n)
    {
        vv[x][y]++;
        x++;
        y++;
    }
    x = a + 1;
    y = b - 1;
    while (x < n && y >= 0)
    {
        vv[x][y]++;
        x++;
        y--;
    }
}

void queen(vector<vector<int>> &vv, int a)
{
    if (a == n)
    {
        answer++;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (vv[a][i] == 0)
            {
                check1(vv, a, i);
                queen(vv, a + 1);
                check0(vv, a, i);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<vector<int>> vv(n, vector<int>(n, 0));
    for (int i = 0; i < (int)n / 2; i++)
    {
        check1(vv, 0, i);
        queen(vv, 1);
        check0(vv, 0, i);
    }
    answer *= 2;
    if (n % 2 != 0)
    {
        check1(vv, 0, (int)n / 2);
        queen(vv, 1);
        check0(vv, 0, (int)n / 2);
    }

    cout << answer;
    return 0;
}