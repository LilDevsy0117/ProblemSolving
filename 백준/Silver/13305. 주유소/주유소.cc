#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> distance(n - 1);
    vector<int> cost(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> distance[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    int temp = cost[0];
    int answer = 0;
    for (int i = 1; i < n; i++)
    {
        answer += temp * distance[i - 1];
        if (cost[i] < temp)
        {

            temp = cost[i];
        }
    }
    cout << answer;

    return 0;
}