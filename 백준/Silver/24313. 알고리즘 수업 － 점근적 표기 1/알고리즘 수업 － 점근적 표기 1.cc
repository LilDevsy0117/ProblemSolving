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

    double a1, a0;
    cin >> a1 >> a0;
    double c, n0;
    cin >> c >> n0;
    if (a1 > c)
    {
        cout << 0;
    }
    else if (a1 == c && a0 == 0)
    {
        cout << 0;
    }
    else
    {
        if (a0 / (c - a1) <= n0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}