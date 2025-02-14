#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;
const int INF = 987654321;
int V, E, K;

vector<pair<int, int>> edge[20001];
priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> Q;
int dist[20001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> V >> E >> K;

	for (int i = 1; i <= E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		edge[u].push_back({ w,v });
	}
	fill(dist, dist + 20001, INF);
	dist[K] = 0;
	Q.push({ 0,K });
	while (!Q.empty())
	{
		int cur = Q.top().second;
		int curD = Q.top().first;
		Q.pop();
		for (auto it : edge[cur])
		{
			int nextD = it.first;
			int next = it.second;
			if (dist[next] > curD + nextD)
			{
				dist[next] = curD + nextD;
				Q.push({ dist[next], next });
			}
		}
	}
	for (int i = 1; i <= V; i++)
	{
		if (dist[i] == INF) cout << "INF\n";
		else cout << dist[i] << "\n";
	}

	return 0;
}