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

    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    cout << "<";
    int c = 1;
    while (!q.empty())
    {
        if (c == k)
        {
            int temp = q.front();
            q.pop();
            cout << temp;
            if (q.empty())
            {
                cout << ">";
                break;
            }
            else
            {
                cout << ", ";
            }
            c = 1;
        }
        else
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
            c++;
        }
    }

    return 0;
}