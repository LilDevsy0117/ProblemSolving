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
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    deque<int> st;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int a;
            cin >> a;
            st.push_back(a);
        }
        else if (s == "push_front")
        {
            int a;
            cin >> a;
            st.push_front(a);
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
        else if (s == "pop_back")
        {
            if (st.size() == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.back() << "\n";
                st.pop_back();
            }
        }
        else if (s == "pop_front")
        {
            if (st.size() == 0)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.front() << "\n";
                st.pop_front();
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