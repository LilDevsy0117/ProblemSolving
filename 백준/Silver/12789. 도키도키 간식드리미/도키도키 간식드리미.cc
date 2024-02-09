#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int idx = 1;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a != idx)
        {
            while (!s.empty() && s.top() == idx)
            {
                s.pop();
                idx++;
            }
            s.push(a);
        }
        else
        {
            idx++;
        }
    }
    while (!s.empty() && s.top() == idx)
    {
        s.pop();
        idx++;
    }
    if (s.empty())
    {
        cout << "Nice";
    }
    else
    {
        cout << "Sad";
    }

    return 0;
}
