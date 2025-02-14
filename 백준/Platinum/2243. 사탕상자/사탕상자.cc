#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <string.h>
using namespace std;
const int INF = 1e9;

//int dx[8] = { -1,-1,-1,0,1,1,1,0 };
//int dy[8] = { -1,0,1,1,1,0,-1,-1 };

int N;
int MAX= 1 << 20;
vector<int> seg(2*MAX);


void update(int i , int cnt)
{
	i = MAX + i - 1;
	seg[i] += cnt;

	while (i)
	{
		i /= 2;
		seg[i] = seg[2 * i] + seg[2 * i + 1];
	}
}

int search(int idx, int rank)
{
	if (idx >= MAX)
	{
		update(idx - MAX + 1, -1);
		return idx - MAX + 1;
	}

	if (rank <= seg[2 * idx]) return search(2 * idx, rank);
	else return search(2 * idx + 1, rank - seg[2 * idx]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
		
	cin >> N ;
	for (int i = 0; i < N; i++)
	{
		int a, b, c;
		cin >> a >> b;
		if (a == 1)
		{
			cout << search(1, b)<<"\n";
		}
		else
		{
			cin >> c;
			update(b, c);
		}
	}
	return 0;
}