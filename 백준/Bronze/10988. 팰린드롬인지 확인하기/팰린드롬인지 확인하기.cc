#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int answer = 0;
    string s;
    cin >> s;
    string a = s;
    reverse(s.begin(), s.end());
    if (a == s)
        answer = 1;

    cout << answer;
    return 0;
}