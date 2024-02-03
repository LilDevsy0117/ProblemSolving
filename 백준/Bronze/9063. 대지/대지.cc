#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if (x.size() == 1)
    {
        cout << 0;
    }
    else
    {
        int x_len, y_len;
        x_len = x[x.size() - 1] - x[0];
        y_len = y[y.size() - 1] - y[0];
        if (x_len * y_len != 0)
        {
            cout << x_len * y_len;
        }
        else
        {
            if (x_len == 0)
            {
                cout << y_len;
            }
            else if (y_len == 0)
            {
                cout << x_len;
            }
        }
    }

    return 0;
}