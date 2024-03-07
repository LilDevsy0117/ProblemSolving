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

    int x;
    vector<int> v;
    for (int i = 0; i < 8; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int flag = 0;
    for (int i = 0; i < 7; i++)
    {
        if (v[i] + 1 == v[i + 1])
        {
            flag++;
        }
        else if (v[i] - 1 == v[i + 1])
        {
            flag--;
        }
    }
    if (flag == 7)
    {
        cout << "ascending";
    }
    else if (flag == -7)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }

    return 0;
}