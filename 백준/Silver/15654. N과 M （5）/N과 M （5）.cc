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
vector<int> k;
vector<int> v;
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
        if (find(k.begin(), k.end(), v[i]) == k.end())
        {
            k.push_back(v[i]);
            go(z + 1);
            k.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    go(0);

    return 0;
}