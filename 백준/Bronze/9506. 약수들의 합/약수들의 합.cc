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
    int n;
    int answer;
    while (1)
    {
        string s;
        vector<int> v;
        v.push_back(1);
        answer = 1;
        cin >> n;
        if (n == -1)
            break;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                answer += i;
                answer += n / i;
                v.push_back(i);
                v.push_back(n / i);
            }
        }
        sort(v.begin(), v.end());
        if (answer == n)
        {
            s = to_string(n) + " = ";
            for (auto i : v)
            {
                s += to_string(i);
                s += " + ";
            }
            s.erase(s.end() - 3, s.end());
            cout << s << "\n";
        }
        else
        {
            s = to_string(n) + " is NOT perfect.";
            cout << s << "\n";
        }
    }

    return 0;
}