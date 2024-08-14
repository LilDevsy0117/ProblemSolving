#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> wait(n);

    for (int i = 0; i < n; i++)
    {
        cin >> wait[i];
    }

    sort(wait.begin(), wait.end());
    int temp = 0;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp + wait[i];
        answer += temp;
    }
    cout << answer;

    return 0;
}