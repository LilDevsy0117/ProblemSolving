#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    vector<vector<bool>> visit(n, vector<bool>(n));
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            graph[i][j] = s[j] - '0';
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    vector<int> answer;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (visit[i][j] || graph[i][j] == 0)
                continue;
            queue<pair<int, int>> Q;
            Q.push({i, j});
            visit[i][j] = true;
            int area = 0;
            while (!Q.empty())
            {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int k = 0; k < 4; k++)
                {
                    int nx = cur.first + dx[k];
                    int ny = cur.second + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (visit[nx][ny] || graph[nx][ny] != 1)
                        continue;
                    visit[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            answer.push_back(area);
        }
    }

    sort(answer.begin(), answer.end());
    cout << answer.size() << "\n";
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << "\n";
    }

    return 0;
}