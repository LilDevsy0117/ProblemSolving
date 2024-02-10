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
    user.insert("ChongChong");
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (user.find(a) != user.end())
        {
            user.insert(b);
        }
        else if (user.find(b) != user.end())
        {
            user.insert(a);
        }
    }
    answer = user.size();
    cout << answer;

    return 0;
}