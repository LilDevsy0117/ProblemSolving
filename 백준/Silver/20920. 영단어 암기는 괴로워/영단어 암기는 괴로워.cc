#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
#include <deque>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.second == b.second)
    {
        if (a.first.size() == b.first.size())
        {
            return a.first < b.first;
        }
        else
        {
            return a.first.size() > b.first.size();
        }
    }
    return a.second > b.second;
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    map<string, int> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s.size() >= m)
        {
            v[s]++;
        }
    }
    vector<pair<string, int>> vv(v.begin(), v.end());

    sort(vv.begin(), vv.end(), comp);
    for (int i = 0; i < vv.size(); i++)
    {
        cout << vv[i].first << "\n";
    }

    return 0;
}