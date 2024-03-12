#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
#include <queue>
#include <deque>
#include <sstream>
#include <list>
using namespace std;

int n, m;
int MAX = 8;
vector<int> k(MAX);
vector<int> v;
vector<bool> visited(MAX);
void go(int z)
{
    if (z == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << k[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            if (z > 0 && k[z - 1] < v[i])
            {
                k[z] = v[i];
                go(z + 1);
            }
            else if (z == 0)
            {
                k[z] = v[i];
                go(z + 1);
            }
            visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    go(0);

    return 0;
}