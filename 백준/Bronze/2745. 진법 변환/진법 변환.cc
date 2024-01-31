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

    string s;
    int b;
    cin >> s >> b;
    reverse(s.begin(), s.end());
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65)
        {
            answer += pow(b, i) * (s[i] - 55);
        }
        else
        {
            answer += pow(b, i) * (s[i] - '0');
        }
    }
    cout << answer;

    return 0;
}