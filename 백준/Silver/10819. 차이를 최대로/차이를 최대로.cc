#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m = 0;
    do
    {
        int s = 0;
        for (int i = 0; i < n - 1; i++)
        {
            s += abs(v[i] - v[i + 1]);
        }
        m = max(m, s);
    } while (next_permutation(v.begin(), v.end()));
    cout << m;

    return 0;
}