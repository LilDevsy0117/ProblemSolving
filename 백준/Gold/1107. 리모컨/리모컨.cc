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

string s;
int n;
vector<int> v;
int m;
void go(int z, string t)
{
    if (z == s.size() + 1)
    {

        t = to_string(stoi(t));
        int len = t.size();

        m = min(m, len + abs(stoi(t) - stoi(s)));
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (t.size() == count(t.begin(), t.end(), '0') && i == 0 && z < s.size())
            {
                go(z + 1, t + to_string(i));
            }
            else if (find(v.begin(), v.end(), i) == v.end())
            {
                go(z + 1, t + to_string(i));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    cin >> n;
    m = abs(stoi(s) - 100);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (find(v.begin(), v.end(), 1) == v.end())
    {
        go(1, "1");
    }

    go(1, "0");

    cout << m;
    return 0;
}