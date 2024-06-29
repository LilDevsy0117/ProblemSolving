#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> graph[n + 1];
    vector<bool> visit(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visit[i])
            continue;
        answer++;
        queue<int> Q;
        Q.push(i);
        visit[i] = true;
        while (!Q.empty())
        {
            int cur = Q.front();
            Q.pop();
            for (int j = 0; j < graph[cur].size(); j++)
            {
                if (visit[graph[cur][j]])
                    continue;
                Q.push(graph[cur][j]);
                visit[graph[cur][j]] = true;
            }
        }
    }

    cout << answer;

    return 0;
}