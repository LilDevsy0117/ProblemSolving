#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;
    vector<int> graph[n + 1];
    vector<bool> visit(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    stack<int> S;
    S.push(v);
    while (!S.empty())
    {
        int cur = S.top();
        S.pop();
        if (visit[cur])
            continue;
        visit[cur] = true;
        cout << cur << " ";
        for (int j = 0; j < graph[cur].size(); j++)
        {
            int next = graph[cur][graph[cur].size() - 1 - j];
            if (visit[next])
                continue;
            S.push(next);
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " ";
    //     for (int j = 0; j < graph[i].size(); j++)
    //     {
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    fill(visit.begin(), visit.end(), false);
    cout << "\n";

    queue<int> Q;
    Q.push(v);
    visit[v] = true;
    while (!Q.empty())
    {
        int cur = Q.front();
        cout << cur << " ";
        Q.pop();
        for (int j = 0; j < graph[cur].size(); j++)
        {
            if (visit[graph[cur][j]])
                continue;

            Q.push(graph[cur][j]);
            visit[graph[cur][j]] = true;
        }
    }

    return 0;
}