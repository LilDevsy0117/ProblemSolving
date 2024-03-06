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

    vector<int> v(n + 1, 1);
    for (int i = 2; i < v.size(); i++)
    {
        for (int j = i; j < v.size(); j += i)
        {
            v[j] += i;
        }
    }
    long long sum = 0;
    for (int i = 1; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << sum;

    return 0;
}