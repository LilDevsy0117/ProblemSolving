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
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    stack<int> st;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int idx = 1;
    string answer = "";
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == v[i])
        {
            answer += "-\n";
            st.pop();
        }
        else if (v[i] < idx && st.top() != v[i])
        {
            answer = "NO";
            break;
        }
        else
        {
            while (idx <= v[i])
            {
                st.push(idx);
                answer += "+\n";
                idx++;
            }
            answer += "-\n";
            st.pop();
        }
    }
    cout << answer;

    return 0;
}