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

    string s;
    cin >> s;
    string answer = "";
    while (s.size() % 3 != 0)
    {
        s = '0' + s;
    }
    int i = 0;
    while (i < s.size())
    {
        string s1 = s.substr(i, 3);
        answer += to_string((s1[0] - '0') * 4 + (s1[1] - '0') * 2 + s1[2] - '0');
        i += 3;
    }
    cout << answer;

    return 0;
}