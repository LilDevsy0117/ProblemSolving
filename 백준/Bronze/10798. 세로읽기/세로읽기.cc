#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> v(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[j].size() - 1 >= i)
            {
                cout << v[j][i];
            }
        }
    }
    return 0;
}