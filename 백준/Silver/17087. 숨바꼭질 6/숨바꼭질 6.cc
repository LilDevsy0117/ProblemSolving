#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int answer = abs(s - v[0]);
    for (int i = 0; i < n; i++)
    {
        answer = gcd(answer, abs(s - v[i]));
    }
    cout << answer;

    return 0;
}