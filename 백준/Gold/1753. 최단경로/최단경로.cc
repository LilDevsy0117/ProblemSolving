	#include <iostream>
	#include <vector>
	#include <algorithm>
	#include <string>
	#include <cmath>
	#include <set>
	#include <map>
	#include <queue>
	#include <string.h>
	#include<stack>
	#include<climits>
	using namespace std;
	typedef long long ll;
	const int INF = INT_MAX;
	
	int V, E;
	vector<pair<int,int>> edge[20001];
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> Q;
	int dist[20001];
	bool visit[20001];

	int main()
	{
		ios::sync_with_stdio(false );
		cin.tie(NULL);
		cout.tie(NULL);
	
		cin >> V >> E;
		int K;
		cin >> K;
		Q.push({ 0,K });
		fill(dist, dist + 20001, INF);
		dist[K] = 0;

		for (int i = 0; i < E; i++)
		{
			int u, v, w;
			cin >> u >> v >> w;
			edge[u].push_back({ w,v });
		}

		while (!Q.empty())
		{
			int cur = Q.top().second;
			int curD = Q.top().first;
			Q.pop();

			if (visit[cur]) continue;
			visit[cur] = true;

			for (auto it : edge[cur])
			{
				if (dist[it.second] > curD + it.first)
				{
					dist[it.second] = curD + it.first;
					Q.push({ curD + it.first ,it.second	});
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