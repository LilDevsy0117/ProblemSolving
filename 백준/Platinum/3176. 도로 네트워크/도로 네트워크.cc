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
	
	const int MAX = 100001;
	int N,K;
	vector<pair<int,int>> adj[MAX];
	int parent[MAX][18];
	int depth[MAX];
	pair<int, int> value[MAX][18];

	void dfs(int x)
	{
		for (int i = 0; i<adj[x].size(); i++)
		{
			if (depth[adj[x][i].first] == -1)
			{
				depth[adj[x][i].first] = depth[x] + 1;
				parent[adj[x][i].first][0] = x;
				value[adj[x][i].first][0] = {adj[x][i].second, adj[x][i].second};
				dfs(adj[x][i].first);
			}
		}
	}

	pair<int,int> lca(int u, int v)
	{
		int mini = INF;
		int maxi = 0;
		if (depth[u] < depth[v]) swap(u, v);
		int diff = depth[u] - depth[v];
		int j = 0;
		while (diff)
		{
			if (diff % 2) 
			{
				mini = min(mini, value[u][j].first); 
				maxi = max(maxi, value[u][j].second); 
				u = parent[u][j];
			}
			j++;
			diff /= 2;
		}

		if(u != v)
		{
			for(int i = 17; i>=0; i--)
			{
				if (parent[u][i] != parent[v][i])
				{
					mini = min(mini, value[u][i].first); 
					maxi = max(maxi, value[u][i].second); 
					u = parent[u][i];
					mini = min(mini, value[v][i].first); 
					maxi = max(maxi, value[v][i].second); 
					v = parent[v][i];
				}
			}
			mini = min(mini, value[u][0].first);
			maxi = max(maxi, value[u][0].second);
			mini = min(mini, value[v][0].first);
			maxi = max(maxi, value[v][0].second);
		}
		
		return {mini,maxi};
	}

	int main()
	{
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	
		cin >> N;
		for (int i = 1; i <= N-1; i++)
		{
			int a, b, c;
			cin >> a >> b >> c;
			adj[a].push_back({ b,c });
			adj[b].push_back({ a,c });
		}
		fill(depth, depth + MAX, -1);
		memset(parent, -1, sizeof(parent));
		depth[1] = 0;
		dfs(1);

		for(int i = 0; i<17; i++)
		{
			for(int j = 1; j<=N; j++)
			{
				int temp = parent[j][i];
				if(temp != -1)
				{
					parent[j][i+1] = parent[temp][i];
					value[j][i+1].first = min(value[j][i].first, value[temp][i].first);
					value[j][i+1].second = max(value[j][i].second, value[temp][i].second);
				}
			}
		}

		cin >> K;
		for (int i = 0; i < K; i++)
		{
			int a, b;
			cin >> a >> b;
			pair<int, int> ans =lca(a,b);
			cout<<ans.first<<" "<<ans.second<<"\n";
		}


		return 0;
	}