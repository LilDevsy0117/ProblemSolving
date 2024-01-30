#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n, a, b;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        v[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        reverse(v.begin() + a, v.begin() + b + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}