#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    if (n == k)
    {
        cout << 0;
        return 0;
    }
    vector<bool> visited(100001);
    int answer = 0;
    queue<int> Q;
    Q.push(n);

    while (1)
    {
        queue<int> temp;
        answer++;
        while (!Q.empty())
        {
            int cur = Q.front();
            Q.pop();

            if (cur - 1 == k)
            {
                cout << answer;
                return 0;
            }
            if (visited[cur - 1] == false && cur - 1 >= 0)
            {
                temp.push(cur - 1);
                visited[cur - 1] = true;
            }

            if (cur + 1 == k && cur + 1 <= 100000)
            {
                cout << answer;
                return 0;
            }
            if (visited[cur + 1] == false && cur + 1 <= 100000)
            {
                temp.push(cur + 1);
                visited[cur + 1] = true;
            }
            if (cur * 2 == k)
            {
                cout << answer;
                return 0;
            }
            if (visited[cur * 2] == false && cur * 2 <= 100000)
            {
                temp.push(cur * 2);
                visited[cur * 2] = true;
            }
        }

        Q = temp;
        temp = queue<int>();
    }

    cout << answer;
    return 0;
}