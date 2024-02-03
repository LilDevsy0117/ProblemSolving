#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    if (v[0] + v[1] <= v[2])
    {
        cout << v[0] + v[1] + v[0] + v[1] - 1;
    }
    else
    {
        cout << v[0] + v[1] + v[2];
    }

    return 0;
}