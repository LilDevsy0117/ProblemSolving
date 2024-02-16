#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
using namespace std;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<vector<int>> vv;
    int x;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            v.push_back(x);
        }
        vv.push_back(v);
    }

    vector<bool> v(n / 2, false);
    v.insert(v.end(), n / 2, true);
    vector<int> min_v;
    do
    {
        vector<int> start;
        vector<int> link;
        for (int j = 0; j < n; j++)
        {
            if (v[j])
            {
                start.push_back(j);
            }
            else
            {
                link.push_back(j);
            }
        }
        int a = 0;
        int b = 0;
        for (int k = 0; k < start.size() - 1; k++)
        {
            for (int h = k + 1; h < start.size(); h++)
            {
                a += vv[start[k]][start[h]];
                a += vv[start[h]][start[k]];
            }
        }
        for (int k = 0; k < link.size() - 1; k++)
        {
            for (int h = k + 1; h < link.size(); h++)
            {
                b += vv[link[k]][link[h]];
                b += vv[link[h]][link[k]];
            }
        }
        min_v.push_back(abs(a - b));

    } while (next_permutation(v.begin(), v.end()));

    sort(min_v.begin(), min_v.end());

    cout << min_v[0];

    return 0;
}