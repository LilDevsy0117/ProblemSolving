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

    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    int idx = 1;
    vector<int> v;
    while (q.size() > 0)
    {
        if (idx == k)
        {
            v.push_back(q.front());
            q.pop();
            idx = 1;
        }
        else
        {
            int a = q.front();
            q.pop();
            q.push(a);
            idx++;
        }
    }
    cout << "<";
    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i] << ", ";
    }
    cout << v.back() << ">";

    return 0;
}
