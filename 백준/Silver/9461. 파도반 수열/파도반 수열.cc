#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(101);
    v[1] = 1;
    v[2] = 1;
    v[3] = 1;
    v[4] = 2;
    v[5] = 2;
    for (int i = 6; i <= 100; i++)
    {
        v[i] = v[i - 1] + v[i - 5];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << v[x] << "\n";
    }

    return 0;
}