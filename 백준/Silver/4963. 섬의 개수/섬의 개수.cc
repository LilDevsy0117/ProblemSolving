#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> dx = {1, 0, -1, 0, 1, 1, -1, -1};
    vector<int> dy = {0, 1, 0, -1, 1, -1, 1, -1};

    while (1)
    {
        int w, h;
        cin >> w >> h;
        if (w * h == 0)
            return 0;
        vector<vector<int>> graph(h, vector<int>(w, 0));
        vector<vector<bool>> visit(h, vector<bool>(w));

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> graph[i][j];
            }
        }

        int num = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (visit[i][j] || graph[i][j] == 0)
                    continue;
                num++;
                queue<pair<int, int>> Q;
                Q.push({i, j});
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int k = 0; k < 8; k++)
                    {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        if (nx < 0 || nx >= h || ny < 0 || ny >= w)
                            continue;
                        if (visit[nx][ny] || graph[nx][ny] != 1)
                            continue;
                        visit[nx][ny] = true;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << num << "\n";
    }

    return 0;
}