#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
#include <queue>
#include <deque>
#include <sstream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while (getline(ss, word, ' '))
        {
            reverse(word.begin(), word.end());
            cout << word;
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}