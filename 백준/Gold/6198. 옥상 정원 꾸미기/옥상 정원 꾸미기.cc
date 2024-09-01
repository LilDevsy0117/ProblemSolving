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
    long long answer = 0;
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
            while (temp_top.first < cur)
            {
                temp.pop();
                if (temp.empty())
                    break;
                temp_top = temp.top();
            }
            if (temp.empty())
            {
                answer += N - st.size();
                // cout << st.size() << " " << N - st.size() << " \n";
            }
            else
            {
                answer += temp_top.second - st.size() - 1;
                // cout << st.size() << " " << temp_top.second - st.size() - 1 << " \n";
            }
            temp.push({cur, st.size()});
        }
        st.pop();
    }

    cout << answer;

    return 0;
}