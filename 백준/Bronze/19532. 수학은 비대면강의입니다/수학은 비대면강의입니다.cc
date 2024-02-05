#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x, y;
    if (b == 0)
    {
        x = c / a;
        y = (f - d * x) / e;
    }
    else if (a == 0)
    {
        y = c / b;
        x = (f - e * y) / d;
    }
    else if (d == 0)
    {
        y = f / e;
        x = (c - b * y) / a;
    }
    else if (e == 0)
    {
        x = f / d;
        y = (c - a * x) / b;
    }
    else
    {
        x = (e * c - b * f) / (a * e - b * d);
        y = (c - a * x) / b;
    }

    cout << x << " " << y;

    return 0;
}