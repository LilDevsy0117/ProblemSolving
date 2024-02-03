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

    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a * b * c == 0)
            break;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        if (v[0] + v[1] <= v[2])
        {
            cout << "Invalid\n";
            continue;
        }

        if (a == b && b == c)
        {
            cout << "Equilateral\n";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "Isosceles\n";
        }
        else
        {
            cout << "Scalene\n";
        }
    }

    return 0;
}