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

    int n;
    cin >> n;
    string s = "";
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    while (n != 1)
    {
        if (n % -2 == 0)
        {
            s = '0' + s;
            n /= -2;
        }
        else if (n < 0)
        {
            s = '1' + s;
            n = n / -2 + 1;
        }
        else
        {
            s = '1' + s;
            n /= -2;
        }
    }
    s = '1' + s;
    cout << s;

    return 0;
}