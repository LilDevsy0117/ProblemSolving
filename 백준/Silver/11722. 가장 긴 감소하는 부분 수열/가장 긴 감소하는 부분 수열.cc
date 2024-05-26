#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    vector<int> dp_desc(N, 1);

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j > i; j--)
        {
            if (v[i] > v[j])
            {
                dp_desc[i] = max(dp_desc[i], dp_desc[j] + 1);
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        answer = max(answer, dp_desc[i]);
    }
    cout << answer;

    return 0;
}