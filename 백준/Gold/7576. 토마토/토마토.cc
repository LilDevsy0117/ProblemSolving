#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> m >> n;
    vector<vector<int>> graph(n, vector<int>(m, 0));
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};
    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 1)
            {
                graph[i][j] = 0;
                Q.push({i, j});
            }
            else if (graph[i][j] == 0)
            {
                graph[i][j] = -1;
            }
            else
            {
                graph[i][j] = 0;
            }
        }
    }

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (graph[nx][ny] >= 0)
                continue;
            graph[nx][ny] = graph[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }

    // 거리 확인
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < m; j++)
    //      {
    //          cout << graph[i][j];
    //      }
    //      cout << "\n";
    //  }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        if (*min_element(graph[i].begin(), graph[i].end()) == -1)
        {
            cout << -1;
            return 0;
        }
        answer = max(answer, *max_element(graph[i].begin(), graph[i].end()));
    }
    cout << answer;

    return 0;
}