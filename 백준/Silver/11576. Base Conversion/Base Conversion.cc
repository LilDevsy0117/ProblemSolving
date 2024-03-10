#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int l;
    cin >> l;
    double s = 0;
    for (int i = 1; i <= l; i++)
    {
        int x;
        cin >> x;
        s += x * pow(n, l - i);
    }

    vector<int> v;
    while (s >= m)
    {
        v.push_back((int)s % m);
        s /= m;
    }
    v.push_back(s);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}
