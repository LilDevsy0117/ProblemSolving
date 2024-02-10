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
#include <unordered_map>
#include <map>
#include <cmath>
using namespace std;

string contor(string s)
{
    if (s.size() == 1)
    {
        return "-";
    }
    string space(s.size() / 3, ' ');
    return contor(s.substr(0, s.size() / 3)) + space + contor(s.substr(0, s.size() / 3));
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    while (cin >> n)
    {
        string s;
        for (int i = 0; i < pow(3, n); i++)
        {
            s += '-';
        }
        cout << contor(s) << "\n";
    }

    return 0;
}