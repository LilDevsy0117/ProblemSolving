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

    int N;
    cin >> N;
    stack<int> st;
    stack<pair<int, int>> temp;
    vector<int> v(N + 1);
    for (int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        st.push(t);
    }
    int cur;
    while (!st.empty())
    {
        cur = st.top();
        if (temp.empty())
        {
            temp.push({cur, st.size()});
        }
        else
        {
            auto temp_top = temp.top();
            while (temp_top.first <= cur)
            {
                v[temp_top.second] = st.size();
                temp.pop();
                if (temp.empty())
                    break;
                temp_top = temp.top();
            }
            temp.push({cur, st.size()});
        }
        st.pop();
    }

    for (int i = 1; i <= N; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}