#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int N, W;

pair<int, int> arr[1111];
int dp[1111][1111];
int ans[1111][1111];

int dist(pair<int, int> a, pair<int, int> b)
{
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int dfs(int x, int y)
{
	int now = max(x, y) + 1;
	if (now > W) return 0;
	pair<int, int> a, b;
	if (x == 0) a = { 1,1 };
	else a = arr[x];
	if (y == 0) b = { N,N };
	else b = arr[y];

	int& ret = dp[x][y];
	
	if (ret != 0) return ret;
	int fst = dist(a, arr[now]) + dfs(now, y);
	int snd = dist(b, arr[now]) + dfs(x, now);
	ans[x][y] = fst < snd ? 1 : 2;
	return ret = min(fst, snd);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N >> W;

	for (int i = 1; i <= W; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[i] = { a,b };
	}
	cout << dfs(0, 0) << "\n";

	
	int x = 0; // 경찰차 1
	int y = 0; // 경찰차 2
	while (max(x, y) < W) { // W 사건 까지만. max(x,y)=0 일때 1 사건, max(x,y)=1 일때 2 사건, ...
		cout << ans[x][y] << '\n';
		if (ans[x][y] == 1) x = max(x, y) + 1;
		else y = max(x, y) + 1;
	}

	return 0;
}