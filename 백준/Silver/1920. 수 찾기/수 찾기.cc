#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
using namespace std;

bool bs(vector<int> &v, int low, int high, int target)
{
    if (low > high)
        return false;
    int mid = (low + high) / 2;

    if (v[mid] == target)
        return true;

    if (v[mid] > target)
        return bs(v, low, mid - 1, target);
    else
        return bs(v, mid + 1, high, target);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (bs(v, 0, v.size() - 1, x))
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}