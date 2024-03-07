#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int e, s, m;
    cin >> e >> s >> m;
    int a = 1, b = 1, c = 1;
    int year = 1;
    while (a != e || b != s || c != m)
    {
        a++;
        b++;
        c++;
        if (a > 15)
            a -= 15;
        if (b > 28)
            b -= 28;
        if (c > 19)
            c -= 19;
        year++;
    }
    cout << year;

    return 0;
}