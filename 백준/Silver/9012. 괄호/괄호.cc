#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '(')
            {
                sum++;
            }
            else
            {
                sum--;
                if (sum < 0)
                {
                    cout << "NO\n";
                    break;
                }
            }
        }
        if (sum == 0)
        {
            cout << "YES\n";
        }
        else if (sum > 0)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
