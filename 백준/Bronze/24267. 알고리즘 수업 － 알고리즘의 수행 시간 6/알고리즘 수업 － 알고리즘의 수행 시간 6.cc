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

    long long n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        sum += (n - i - 1) * (n - i) / 2;
        // for (int j = i + 1; j <= n - 1; j++)
        // {
        //     sum += n - j ;
        // }
    }
    cout << sum << "\n";
    cout << 3;

    return 0;
}