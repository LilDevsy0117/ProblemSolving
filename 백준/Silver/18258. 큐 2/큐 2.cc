#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else
        {
            if (s == "front")
            {
                if (q.empty())
                {
                    cout << "-1\n";
                }
                else
                {
                    cout << q.front() << "\n";
                }
            }
            else if (s == "back")
            {
                if (q.empty())
                {
                    cout << "-1\n";
                }
                else
                {
                    cout << q.back() << "\n";
                }
            }
            else if (s == "pop")
            {
                if (q.empty())
                {
                    cout << "-1\n";
                }
                else
                {
                    cout << q.front() << "\n";
                    q.pop();
                }
            }
            else if (s == "size")
            {
                cout << q.size() << "\n";
            }
            else if (s == "empty")
            {
                if (q.empty())
                {
                    cout << "1\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
        }
    }

    return 0;
}
