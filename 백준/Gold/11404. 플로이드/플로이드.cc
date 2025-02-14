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
	const int INF = 987654321;
	
	int V, E;
	int dp[101][101];

	int main()
	{
		ios::sync_with_stdio(false );
		cin.tie(NULL);
		cout.tie(NULL);
	
		cin >> V >> E;
		fill(&dp[0][0], &dp[100][100], INF);

		for (int i = 1; i <= V; i++)
		{
			dp[i][i] = 0;
		}

		for (int i = 0; i < E; i++)
		{
			int u, v, w;
			cin >> u >> v >> w;
			dp[u][v] = min(dp[u][v], w);
		}

		for (int k = 1; k <= V; k++)
		{
			for (int i = 1; i <= V; i++)
			{
				for (int j = 1; j <= V; j++)
				{
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
				}
			}
		}
	
		for (int i = 1; i <= V; i++)
		{
			for (int j = 1; j <= V; j++)
			{
				if (dp[i][j] == INF) cout << "0 ";
				else cout << dp[i][j] << " ";
			}
			cout << "\n";
		}

		return 0;
	}