#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<bool> check(6, true);
        check.insert(check.end(), n - 6, false);
        do
        {
            for (int i = 0; i < n; i++)
            {
                if (check[i])
                {
                    cout << v[i] << " ";
                }
            }
            cout << "\n";
        } while (prev_permutation(check.begin(), check.end()));
        cout << "\n";
    }

    return 0;
}