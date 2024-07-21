#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    int n;
    cin >> n;
    vector<string> graph(n);
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        cin >> graph[i];
    }

    int answer1 = 0;
    int answer2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j])
                continue;

            Q.push({i, j});
            visited[i][j] = true;
            char color = graph[i][j];

            while (!Q.empty())
            {
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (graph[nx][ny] != color || visited[nx][ny] == true)
                        continue;
                    // cout << nx << " " << ny << " " << graph[nx][ny] << "\n";
                    visited[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            answer1++;
        }
    }
    vector<vector<bool>> visited2(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == 'G')
            {
                graph[i][j] = 'R';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visited2[i][j])
                continue;

            Q.push({i, j});
            visited2[i][j] = true;
            char color = graph[i][j];

            while (!Q.empty())
            {
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (graph[nx][ny] != color || visited2[nx][ny] == true)
                        continue;
                    visited2[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            answer2++;
        }
    }
    cout << answer1 << " " << answer2;

    return 0;
}