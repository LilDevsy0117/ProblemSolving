#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
    {
        return a[0] < b[0];
    }
    return a[1] < b[1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end(), compare);
    int answer = 0;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (last <= v[i][0])
        {
            last = v[i][1];
            answer++;
        }
    }
    cout << answer;

    return 0;
}