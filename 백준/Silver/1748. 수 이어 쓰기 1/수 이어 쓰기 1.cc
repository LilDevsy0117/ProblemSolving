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
    cin >> n;
    long long s = 0;
    while (n > 9)
    {
        double a = pow(10, to_string(n).size() - 1);
        s += (n / (int)a - 1) * a * to_string(n).size() + (n % (int)a + 1) * to_string(n).size();
        n = a - 1;
    }

    cout << s + n;

    return 0;
}