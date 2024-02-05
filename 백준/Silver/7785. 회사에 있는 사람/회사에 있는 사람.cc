#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    map<string, int, greater<>> v;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        v.insert({a, 0});
        v[a]++;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            cout << it->first << "\n";
        }
    }

    return 0;
}