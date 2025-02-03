#include <iostream>
#include <vector>
using namespace std;

int main()
{	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int s=0, e = 0, cnt =0;
	for (int st = 0; st < n; st++)
	{
		while (e < n && s <m)
		{
			s += v[e];
			e++;
		}

		if (s == m) cnt++;
		s -= v[st];
	}

	cout << cnt;


	return 0;
}