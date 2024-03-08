#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        int k = 0;
        while ((m * k + (x - y)) % n != 0)
        {
            k++;
            if (m * k + x > (m * n) / gcd(m, n))
            {
                k = -1;
                break;
            }
        }
        if (k == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << m * k + x << "\n";
        }
    }

    return 0;
}
