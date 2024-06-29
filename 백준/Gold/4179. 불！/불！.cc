#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;
    vector<vector<int>> graph_fire(r, vector<int>(c, 0));
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};
    queue<pair<int, int>> userQ;
    queue<pair<int, int>> fireQ;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            char temp;
            cin >> temp;
            if (temp == 'J')
            {
                userQ.push({i, j});
                if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                {
                    cout << 1;
                    return 0;
                }
            }
            else if (temp == 'F')
            {
                fireQ.push({i, j});
            }
            else if (temp == '.')
            {
                graph_fire[i][j] = -1;
            }
            else
            {
                graph_fire[i][j] = r * c;
            }
        }
    }
    pair<int, int> temp = userQ.front();
    vector<vector<int>> graph = graph_fire;
    graph_fire[temp.first][temp.second] = -1;

    while (!fireQ.empty())
    {
        pair<int, int> cur = fireQ.front();
        fireQ.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                continue;
            if (graph_fire[nx][ny] >= 0)
                continue;
            graph_fire[nx][ny] = graph_fire[cur.first][cur.second] + 1;
            fireQ.push({nx, ny});
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << graph_fire[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    while (!userQ.empty())
    {
        pair<int, int> cur = userQ.front();
        userQ.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                continue;
            if (graph[nx][ny] >= 0)
                continue;
            if (graph_fire[nx][ny] != -1 && graph_fire[nx][ny] <= graph[cur.first][cur.second] + 1)
            {
                graph[nx][ny] = r * c;
            }
            else
            {
                graph[nx][ny] = graph[cur.first][cur.second] + 1;
            }

            userQ.push({nx, ny});
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int answer = r * c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                if (graph[i][j] != r * c && graph[i][j] > 0)
                {
                    answer = min(answer, graph[i][j] + 1);
                }
            }
        }
    }

    if (answer == r * c)
    {
        cout << "IMPOSSIBLE";
        return 0;
    }

    cout << answer;

    return 0;
}