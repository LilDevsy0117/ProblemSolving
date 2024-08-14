#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int answer = 0;
    vector<int> coin(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (k >= coin[i])
        {
            k -= coin[i];
            answer++;
        }
    }
    cout << answer;
    return 0;
}