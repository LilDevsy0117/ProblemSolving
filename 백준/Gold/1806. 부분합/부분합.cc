#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <queue>
using namespace std;
const int INF = 1e9;

int N, S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> S;
	int answer = N + 1;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	int low = 0;
	int high = 0;
	long long tot = 0;
	while (1)
	{
		if (tot < S)
		{
			if (high >= N) break;
			tot += v[high];
			high++;
		}
		else {
			answer = min(answer, high - low);
			tot -= v[low];
			low++;
		}
	}
	if (answer == N + 1)
	{
		cout << 0;
	}
	else {
		cout << answer;
	}
	
	return 0;
}