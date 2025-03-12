#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>

using namespace std;


vector<deque<int>> gear(5, deque<int>(8,0));
int rot[5];

int K, answer =  0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 1; i < 5; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < 8; j++)
		{
			gear[i][j] = s[j] - '0';
		}
	}
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		rot[a] = b;
		for (int j = a-1; j >= 1; j--)
		{
			if (rot[j + 1] && (gear[j][2] != gear[j + 1][6]))
			{
				rot[j] = -rot[j + 1];
			}
			else
			{
				break;
			}
		}

		for (int j = a + 1; j < 5; j++)
		{
			if (rot[j - 1] && (gear[j-1][2] != gear[j][6]))
			{
				rot[j] = -rot[j - 1];
			}
			else
			{
				break;
			}
		}

		for (int j = 1; j < 5; j++)
		{
			if (rot[j] == 1)
			{
				gear[j].push_front(gear[j].back());
				gear[j].pop_back();
			}
			else if (rot[j] == -1)
			{
				gear[j].push_back(gear[j].front());
				gear[j].pop_front();
			}
		}

		fill(rot, rot + 5, 0);
	}

	int score = 1;
	for (int i = 1; i < 5; i++)
	{
		if (gear[i][0] == 1)
		{
			answer += score;
		}
		score *= 2;
	}

	cout << answer;

	return 0;
}
