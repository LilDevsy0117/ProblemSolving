#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

vector<string> v(5);
vector<int> dx = {1, 0, -1, 0};
vector<int> dy = {0, 1, 0, -1};
vector<vector<bool>> visit(5, vector<bool>(5));

int answer = 0;

int bfs()
{
    vector<vector<bool>> check(5, vector<bool>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            bool flag = false;
            int count = 0;
            if (visit[i][j])
            {
                flag = true;
                queue<pair<int, int>> Q;
                Q.push({i, j});
                check[i][j] = true;
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    count++;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5)
                            continue;
                        if (!visit[nx][ny] || check[nx][ny])
                            continue;
                        check[nx][ny] = true;
                        Q.push({nx, ny});
                    }
                }
            }
            if (flag)
            {
                return count;
            }
        }
    }
}
void go(int pos, int num)
{

    if (num == 7)
    {

        int num_s = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (visit[i][j])
                {
                    if (v[i][j] == 'S')
                        num_s++;
                }
            }
        }
        if (num_s < 4)
            return;
        if (bfs() == 7)
        {
            answer++;
        }
        else
        {
            return;
        }
    }
    for (int i = pos; i < 25; i++)
    {
        int x = i / 5;
        int y = i % 5;

        visit[x][y] = true;
        go(i + 1, num + 1);
        visit[x][y] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    go(0, 0);
    cout << answer;
    return 0;
}