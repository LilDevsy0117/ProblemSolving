#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> t;
vector<int> p;
int max_v = 0;
void go(int z, int sum)
{

    for (int i = z; i < n; i++)
    {
        if (i + t[i] <= n)
        {
            go(i + t[i], sum + p[i]);
        }
    }
    max_v = max(max_v, sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    t.resize(n);
    p.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> p[i];
    }
    go(0, 0);
    cout << max_v;

    return 0;
}