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

    int n, b;
    cin >> n >> b;
    string s = "";
    vector<string> v{"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    while (n >= b)
    {
        int temp = n % b;
        if (temp > 9)
        {
            s = v[temp - 10] + s;
        }
        else
        {
            s = to_string(temp) + s;
        }
        n /= b;
    }
    if (n > 9)
    {
        s = v[n - 10] + s;
    }
    else
    {
        s = to_string(n) + s;
    }
    cout << s;

    return 0;
}