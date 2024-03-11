#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
#include <queue>
#include <deque>
#include <sstream>
#include <list>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    list<char> l;
    for (int i = 0; i < s.size(); i++)
    {
        l.push_back(s[i]);
    }
    list<char>::iterator it = l.end();

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'L')
        {
            if (it != l.begin())
            {
                it--;
            }
        }
        else if (c == 'D')
        {
            if (it != l.end())
            {
                it++;
            }
        }
        else if (c == 'B')
        {
            if (it != l.begin())
            {
                it--;
                it = l.erase(it);
            }
        }
        else
        {
            char a;
            cin >> a;
            l.insert(it, a);
        }
    }
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it;
    }

    return 0;
}