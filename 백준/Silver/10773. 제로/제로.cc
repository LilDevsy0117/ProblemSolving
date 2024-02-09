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

    stack<int> s;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            s.pop();
        }
        else
        {
            s.push(a);
        }
    }
    int sum = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}
