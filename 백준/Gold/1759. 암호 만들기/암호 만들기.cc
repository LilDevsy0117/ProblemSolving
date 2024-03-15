#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int l, c;
vector<char> v;

void go(int z, string s, int idx)
{
    if (z == l)
    {
        int cnt = 0;
        if (find(s.begin(), s.end(), 'a') != s.end())
            cnt++;
        if (find(s.begin(), s.end(), 'e') != s.end())
            cnt++;
        if (find(s.begin(), s.end(), 'i') != s.end())
            cnt++;
        if (find(s.begin(), s.end(), 'o') != s.end())
            cnt++;
        if (find(s.begin(), s.end(), 'u') != s.end())
            cnt++;
        if (cnt > 0 && cnt <= l - 2)
            cout << s << "\n";
    }
    else
    {
        for (int i = idx + 1; i < c; i++)
        {
            s += v[i];
            go(z + 1, s, i);
            s.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> l >> c;
    v.resize(c);
    for (int i = 0; i < c; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    go(0, "", -1);

    return 0;
}
