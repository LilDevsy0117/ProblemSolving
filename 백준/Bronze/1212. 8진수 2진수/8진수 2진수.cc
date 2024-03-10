#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    if (s[0] == '0')
    {
        cout << 0;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            int x = s[i] - '0';

            string temp = "";
            if (x >= 4)
            {
                temp += "1";
                x -= 4;
            }
            else
            {
                temp += "0";
            }
            if (x >= 2)
            {
                temp += "1";
                x -= 2;
            }
            else
            {
                temp += "0";
            }
            if (x >= 1)
            {
                temp += "1";
                x -= 1;
            }
            else
            {
                temp += "0";
            }

            if (i == 0)
            {
                int idx = find(temp.begin(), temp.end(), '1') - temp.begin();
                for (int j = idx; j < temp.size(); j++)
                {
                    cout << temp[j];
                }
            }
            else
            {
                cout << temp;
            }
        }
    }

    return 0;
}
