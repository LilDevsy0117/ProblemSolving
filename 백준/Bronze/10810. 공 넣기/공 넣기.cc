#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        for (int j = a; j <= b; j++)
        {
            v[j] = c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}