#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "";
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < v[i].size(); j++)
        {
            if (find(s.begin(), s.end(), v[i][j]) == s.end())
            {
                s += v[i][j];
            }
        }
    }
    sort(s.begin(), s.end());
    int max_v = 0;
    do
    {
        int su = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int num = 0;

            for (int j = 0; j < v[i].size(); j++)
            {
                num *= 10;
                num += (9 - s.find(v[i][j]));
            }
            su += num;
        }
        max_v = max(max_v, su);
    } while (next_permutation(s.begin(), s.end()));
    cout << max_v;
    return 0;
}