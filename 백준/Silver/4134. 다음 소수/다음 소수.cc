#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x <= 2)
        {
            cout << 2 << "\n";
            continue;
        }
        if (x % 2 == 0)
            x++;

        while (1)
        {
            bool flag = true;
            for (long long j = 3; j * j <= x; j += 2)
            {
                if (x % j == 0)
                {
                    x += 2;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << x << "\n";
                break;
            }
        }
    }

    return 0;
}