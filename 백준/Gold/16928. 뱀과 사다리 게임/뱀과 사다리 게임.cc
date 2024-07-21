#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> ladder(101);
    vector<bool> visited(101);
    queue<int> Q;
    Q.push(1);
    visited[1] = true;

    for (int i = 0; i < n + m; i++)
    {
        int a, b;
        cin >> a >> b;
        ladder[a] = b;
    }

    int answer = 0;
    while (1)
    {
        queue<int> temp;
        answer++;
        while (!Q.empty())
        {
            int cur = Q.front();
            Q.pop();
            for (int i = 1; i <= 6; i++)
            {
                if (visited[cur + i] == false && cur + i <= 100)
                {
                    visited[cur + i] = true;
                    if (ladder[cur + i] != 0)
                    {
                        if (ladder[cur + i] == 100)
                        {
                            cout << answer;
                            return 0;
                        }
                        temp.push(ladder[cur + i]);
                        visited[ladder[cur + i]] = true;
                    }
                    else
                    {
                        if (cur + i == 100)
                        {
                            cout << answer;
                            return 0;
                        }
                        temp.push(cur + i);
                    }
                }
            }
        }
        Q = temp;
        temp = queue<int>();
    }

    return 0;
}