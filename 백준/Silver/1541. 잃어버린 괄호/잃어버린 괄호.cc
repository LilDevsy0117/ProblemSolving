#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
    {
        return a[0] < b[0];
    }
    return a[1] < b[1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string temp = "";
    int answer = 0;
    int negative = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-' && s[i] != '+')
        {
            temp += s[i];
        }
        else
        {
            if (negative == 0)
            {
                answer += stoi(temp);
                temp = "";
            }
            else
            {
                answer -= stoi(temp);
                temp = "";
            }
            if (s[i] == '-')
                negative = 1;
        }
    }
    if (negative == 0)
    {
        answer += stoi(temp);
        temp = "";
    }
    else
    {
        answer -= stoi(temp);
        temp = "";
    }
    cout << answer;

    return 0;
}