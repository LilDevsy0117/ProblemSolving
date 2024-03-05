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

    int n;
    while (cin >> n)
    {
        int cnt = 1;
        int k = 1;
        while (k % n != 0)
        {
            k = k * 10 + 1;
            k %= n;
            cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}