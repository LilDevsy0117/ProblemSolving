#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	
	int N;
	int M;
	cin >> N >>M;
	int cnt = 0;
	vector<int> s_rank(101);
	vector<int> s_seq(101);
	for (int i = 1; i <= M; i++)
	{
		int x;
		cin >> x;
		if (cnt < N)
		{
			if (s_rank[x] == 0)
			{
				cnt++;
				s_rank[x]++;
				s_seq[x] = i;
			}
			else
			{
				s_rank[x]++;
			}
			
		}
		else
		{
			if (s_rank[x] > 0)
			{
				s_rank[x]++;
			}
			else {
				int when = i;
				int idx = -1;
				int min = 1111;
				for (int j = 1; j < 101; j++)
				{
					if (s_rank[j] == 0) continue;
					if (s_rank[j] < min)
					{
						idx = j;
						min = s_rank[j];
						when = s_seq[j];
					}

					if (s_rank[j] == min)
					{
						if (s_seq[j] < when)
						{
							idx = j;
							when = s_seq[j];
						}
					}
				}
				
				s_rank[idx] = 0;
				s_seq[idx] = 0;
				s_rank[x]++;
				s_seq[x] = i;
			}
		}
	}
	
	for (int i = 1; i < 101; i++)
	{
		if (s_rank[i] > 0)
		{
			cout << i << " ";
		}
	}
	
	return 0;
}