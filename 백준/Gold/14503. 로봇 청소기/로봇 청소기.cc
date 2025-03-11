#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, r, c, d;

int arr[51][51];
int visited[51][51];

int answer = 0;

int main() {

	cin >> N >> M;
	cin >> r >> c >> d;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1) visited[i][j] = 1;
		}
	}
	while (1)
	{
		if (arr[r][c] == 0 && !visited[r][c])
		{
			answer++;
			visited[r][c] = 1;
		}

		if (visited[r - 1][c] + visited[r + 1][c] + visited[r][c - 1] + visited[r][c + 1] == 4)
		{
			if (d == 0 && !arr[r+1][c])
			{
				r = r + 1;
				continue;
			}

			if (d == 1 && !arr[r][c-1])
			{
				c = c - 1;
				continue;
			}

			if (d == 2 && !arr[r-1][c])
			{
				r = r - 1;
				continue;
			}

			if (d == 3 && !arr[r][c+1])
			{
				c = c + 1;
				continue;
			}

			break;
		}
		else
		{
			if (d == 0)
			{
				if (c - 1 >= 0 && !arr[r][c - 1] && !visited[r][c - 1])
					c = c - 1;
				d = 3;
				continue;
			}

			if (d == 1)
			{
				if (r - 1 >= 0 && !arr[r - 1][c] && !visited[r - 1][c])
					r = r - 1;
				d = 0;
				continue;
			}

			if (d == 2)
			{
				if(c + 1 < M && !arr[r][c + 1] && !visited[r][c + 1])
					c = c + 1;
				d = 1;
				continue;
			}

			if (d == 3)
			{
				if(r + 1 < N && !arr[r + 1][c] && !visited[r + 1][c])
					r = r + 1;
				d = 2;
				continue;
			}
		}
	}
	cout << answer;


	return 0;
}
