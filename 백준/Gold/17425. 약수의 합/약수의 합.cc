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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<long long> v(1000001, 1);
    for (int i = 2; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j += i)
        {
            v[j] += i;
        }
    }
    for (int i = 2; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << v[x] << "\n";
    }

    return 0;
}