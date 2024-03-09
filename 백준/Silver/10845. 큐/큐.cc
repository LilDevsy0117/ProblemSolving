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
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    queue<int> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int a;
            cin >> a;
            st.push(a);
        }
        else if (s == "front")
        {
            if (st.size() == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.front() << "\n";
            }
        }
        else if (s == "back")
        {
            if (st.size() == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.back() << "\n";
            }
        }
        else if (s == "pop")
        {
            if (st.size() == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.front() << "\n";
                st.pop();
            }
        }
        else if (s == "size")
        {
            cout << st.size() << "\n";
        }
        else if (s == "empty")
        {
            if (st.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
    }

    return 0;
}