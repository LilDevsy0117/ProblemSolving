#include <iostream>

typedef long long ll;
using namespace std;

int N, B, C;
int arr[1000000];

int main()
{
	ll answer = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> B >> C;

	for (int i = 0; i < N; i++)
	{
		answer++;
		if (arr[i] - B > 0)
		{
			int k = arr[i] - B;
			if (k % C != 0)
			{
				answer += k/C + 1;
			}
			else
			{
				answer += k / C;
			}
		}
	}

	cout << answer;


	return 0;
}