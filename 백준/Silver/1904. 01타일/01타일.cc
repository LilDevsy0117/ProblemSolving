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

    long long n;
    cin >> n;
    vector<long long> v(n + 1);
    v[0] = 0;
    v[1] = 1;
    v[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        v[i] = (v[i - 1] + v[i - 2]) % 15746;
    }
    cout << v[n];

    return 0;
}