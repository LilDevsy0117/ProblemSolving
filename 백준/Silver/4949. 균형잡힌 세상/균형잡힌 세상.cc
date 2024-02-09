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

    while (1)
    {
        string s;
        stack<char> stk;
        getline(cin, s);
        if (s == ".")
        {
            break;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                {
                    stk.push('(');
                }
                else if (s[i] == ')')
                {
                    if (!stk.empty() && stk.top() == '(')
                    {
                        stk.pop();
                    }
                    else
                    {
                        stk.push(')');
                    }
                }
                else if (s[i] == '[')
                {
                    stk.push('[');
                }
                else if (s[i] == ']')
                {
                    if (!stk.empty() && stk.top() == '[')
                    {
                        stk.pop();
                    }
                    else
                    {
                        stk.push(']');
                    }
                }
            }
        }
        if (stk.empty())
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
