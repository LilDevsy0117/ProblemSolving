#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
#include <deque>
#include <set>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    set<string> user;
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "ENTER")
        {
            user.clear();
        }
        else
        {
            if (user.find(s) == user.end())
            {
                user.insert(s);
                answer++;
            }
        }
    }
    cout << answer;

    return 0;
}