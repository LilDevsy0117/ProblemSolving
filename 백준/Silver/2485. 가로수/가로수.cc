#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int g = v[1] - v[0];
    for (int i = 1; i < n - 1; i++)
    {
        g = gcd(g, v[i + 1] - v[i]);
    }

    cout << (int)(v.back() - v[0] - 1) / g - (v.size() - 2);

    return 0;
}