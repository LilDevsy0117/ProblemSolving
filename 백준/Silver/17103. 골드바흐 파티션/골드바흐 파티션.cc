#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int answer = 0;
        vector<bool> prime(x + 1, true);
        for (int j = 2; j * j <= x; j++)
        {
            if (prime[j])
            {
                for (int k = j + j; k <= x; k += j)
                {
                    prime[k] = false;
                }
            }
        }
        for (int j = 2; j + j <= x; j++)
        {
            if (prime[j] && prime[x - j])
            {
                answer++;
            }
        }
        cout << answer << "\n";
    }

    return 0;
}