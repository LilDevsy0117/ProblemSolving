#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
int check(vector<string> &v)
{
    int max_seq = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        for (int j = 1; j < n; j++)
        {
            if (v[i][j - 1] == v[i][j])
            {
                cnt++;
            }
            else
            {
                max_seq = max(max_seq, cnt);
                cnt = 1;
            }
        }
        max_seq = max(max_seq, cnt);
        cnt = 1;
        for (int j = 1; j < n; j++)
        {
            if (v[j - 1][i] == v[j][i])
            {
                cnt++;
            }
            else
            {
                max_seq = max(max_seq, cnt);
                cnt = 1;
            }
        }
        max_seq = max(max_seq, cnt);
    }
    return max_seq;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[i][j] != v[i][j + 1])
            {
                swap(v[i][j], v[i][j + 1]);
                answer = max(answer, check(v));
                swap(v[i][j], v[i][j + 1]);
            }
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j][i] != v[j + 1][i])
            {
                swap(v[j][i], v[j + 1][i]);
                answer = max(answer, check(v));
                swap(v[j][i], v[j + 1][i]);
            }
        }
    }

    cout << answer;

    return 0;
}
