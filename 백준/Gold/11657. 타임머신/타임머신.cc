#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
typedef long long ll;
const int INF = 987654321;

int N, M;
vector<pair<pair<int, int>, int>> adj;
ll dist[501];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	fill(dist, dist + 501, INF);
	for (int i = 1; i <= M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;

		adj.push_back({ { a,b }, c });
	}

	dist[1] = 0;
	bool cycle = false;
	for (int k = 0; k <= N; k++)
	{
		for (auto it : adj)
		{
			int i = it.first.first;
			int j = it.first.second;
			int w = it.second;

			if (dist[i] == INF) continue;
			if (dist[i] + w < dist[j])
			{
				dist[j] = dist[i] + w;
				if (k == N) cycle = true;
			}
		}
	}
	if (cycle) cout << "-1";
	else
	{
		for (int i = 2; i <= N; i++)
		{
			if (dist[i] == INF) cout << "-1\n";
			else  cout << dist[i] << "\n";
		}
	}


	return 0;
}