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
    deque<int> deq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int b;
            cin >> b;
            deq.push_front(b);
        }
        else if (a == 2)
        {
            int b;
            cin >> b;
            deq.push_back(b);
        }
        else if (a == 5)
        {
            cout << deq.size() << "\n";
        }
        else
        {
            if (deq.empty())
            {
                if (a == 3 || a == 4 || a == 7 || a == 8)
                {
                    cout << -1 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            else
            {
                if (a == 3)
                {
                    cout << deq.front() << "\n";
                    deq.pop_front();
                }
                else if (a == 4)
                {
                    cout << deq.back() << "\n";
                    deq.pop_back();
                }
                else if (a == 6)
                {
                    cout << 0 << "\n";
                }
                else if (a == 7)
                {
                    cout << deq.front() << "\n";
                }
                else if (a == 8)
                {
                    cout << deq.back() << "\n";
                }
            }
        }
    }

    return 0;
}
