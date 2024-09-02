#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> answer(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push({v[i], i});
        }
        else
        {
            auto cur = st.top();
            while (v[i] > cur.first)
            {
                answer[cur.second] = v[i];
                st.pop();
                if (st.empty())
                    break;
                cur = st.top();
            }
            st.push({v[i], i});
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}