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
    if (next_permutation(v.begin(), v.end()))
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }

    return 0;
}