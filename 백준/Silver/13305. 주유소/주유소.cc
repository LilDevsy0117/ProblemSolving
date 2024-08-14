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

    vector<long long> distance(n - 1);
    vector<long long> cost(n);
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> distance[i];
    }
    for (long long i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    long long temp = cost[0];
    long long answer = 0;
    for (long long i = 1; i < n; i++)
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