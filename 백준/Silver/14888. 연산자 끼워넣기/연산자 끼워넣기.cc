#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
using namespace std;

vector<int> num;
vector<int> op;
int sum;
int max_v = -1000000001;
int min_v = 1000000001;
vector<int> s;

void go(int z)
{
    if (z == num.size())
    {
        // for (int i = 0; i < num.size() - 1; i++)
        // {
        //     cout << s[i] << " ";
        // }
        // cout << sum << "\n";
        if (sum > max_v)
        {
            max_v = sum;
        }
        if (sum < min_v)
        {
            min_v = sum;
        }
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (op[i] > 0)
        {
            if (i == 0)
            {
                s.push_back(i);
                sum += num[z];
                op[i]--;
                go(z + 1);
                s.pop_back();
                sum -= num[z];
                op[i]++;
            }
            else if (i == 1)
            {
                s.push_back(i);
                sum -= num[z];
                op[i]--;
                go(z + 1);
                s.pop_back();
                sum += num[z];
                op[i]++;
            }
            else if (i == 2)
            {
                s.push_back(i);
                int pre = sum;
                sum *= num[z];
                op[i]--;
                go(z + 1);
                s.pop_back();
                sum = pre;
                op[i]++;
            }
            else
            {
                s.push_back(i);
                int pre = sum;
                sum = sum / num[z];
                op[i]--;
                go(z + 1);
                s.pop_back();
                sum = pre;
                op[i]++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        num.push_back(x);
    }

    sum = num[0];

    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        op.push_back(x);
        //+, -, x, /
    }

    go(1);
    cout << max_v << "\n";
    cout << min_v << "\n";
    return 0;
}