#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    deque<pair<int, int>> deq;
    int x, a;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        deq.push_back({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        cout << deq.front().second << " ";
        a = deq.front().first;
        deq.pop_front();
        if (a > 0)
        {
            while (--a)
            {
                deq.push_back({deq.front().first, deq.front().second});
                deq.pop_front();
            }
        }
        else
        {
            while (a++)
            {
                deq.push_front({deq.back().first, deq.back().second});
                deq.pop_back();
            }
        }
    }

    return 0;
}