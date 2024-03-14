#include <bits/stdc++.h>
using namespace std;
int k;
vector<char> v;
string mi = "10000000000";
string ma = "0";
void go(int z, string s)
{
    if (z == k + 1)
    {
        if (stoll(mi) > stoll(s))
        {
            mi = s;
        }
        if (stoll(ma) < stoll(s))
        {
            ma = s;
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (find(s.begin(), s.end(), i + '0') == s.end())
            {
                if (z > 0)
                {
                    if (v[z - 1] == '<' && (s.back() - '0') < i)
                    {
                        s += i + '0';
                        go(z + 1, s);
                        s.pop_back();
                    }
                    else if (v[z - 1] == '>' && (s.back() - '0') > i)
                    {
                        s += i + '0';
                        go(z + 1, s);
                        s.pop_back();
                    }
                }
                else
                {
                    s += i + '0';
                    go(z + 1, s);
                    s.pop_back();
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> k;
    v.resize(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    go(0, "");
    cout << ma << "\n"
         << mi;

    return 0;
}