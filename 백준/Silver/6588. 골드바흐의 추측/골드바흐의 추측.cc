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

    vector<int> v(1000001, 1);
    for (int i = 2; i * i <= v.size(); i++)
    {
        if (v[i])
        {
            for (int j = i + i; j < v.size(); j += i)
            {
                v[j] = 0;
            }
        }
    }

    while (1)
    {
        int x;
        cin >> x;
        if (x == 0)
            break;
        for (int i = 2; i + i <= x; i++)
        {
            if (v[i] && v[x - i])
            {
                cout << x << " = " << i << " + " << x - i << "\n";
                break;
            }
        }
    }

    return 0;
}