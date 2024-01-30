#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
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
        swap(v[a], v[b]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}