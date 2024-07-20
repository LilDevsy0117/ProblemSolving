#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c;
    cin >> n >> c;

    vector<int> graph[n + 1];
    vector<bool> visit(n + 1);
    for (int i = 0; i < c; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int answer = 0;
    queue<int> Q;
    Q.push(1);
    visit[1] = true;
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
            answer++;
        }
    }
    cout << answer;
    return 0;
}