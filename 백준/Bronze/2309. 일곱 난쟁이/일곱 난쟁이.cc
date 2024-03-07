#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v(9);
    for (int i = 0; i < 9; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<bool> b(2, false);
    b.insert(b.end(), 7, true);
    do
    {
        int answer = 0;
        for (int k = 0; k < 9; k++)
        {
            if (b[k])
                answer += v[k];
        }
        if (answer == 100)
        {
            for (int k = 0; k < 9; k++)
            {
                if (b[k])
                    cout << v[k] << "\n";
            }
            break;
        }

    } while (next_permutation(b.begin(), b.end()));

    return 0;
}