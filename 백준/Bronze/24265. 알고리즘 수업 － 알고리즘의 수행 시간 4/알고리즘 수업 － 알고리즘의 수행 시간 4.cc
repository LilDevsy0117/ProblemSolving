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
    for (int i = n - 1; i > 0; i--)
    {
        sum += i;
    }
    cout << sum << "\n";
    cout << 2;

    return 0;
}