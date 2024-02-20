#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
using namespace std;

int w[21][21][21];
void dp(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        w[a][b][c] = 1;
    }
    else if (a < b && b < c)
    {
        w[a][b][c] = w[a][b][c - 1] + w[a][b - 1][c - 1] - w[a][b - 1][c];
    }
    else
    {
        w[a][b][c] = w[a - 1][b][c] + w[a - 1][b - 1][c] + w[a - 1][b][c - 1] - w[a - 1][b - 1][c - 1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            for (int k = 0; k < 21; k++)
            {
                dp(i, j, k);
            }
        }
    }

    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        int result;
        if (a <= 0 || b <= 0 || c <= 0)
        {
            result = w[0][0][0];
        }
        else if (a > 20 || b > 20 || c > 20)
        {

            result = w[20][20][20];
        }
        else
        {
            result = w[a][b][c];
        }
        cout << "w(" << a << ", " << b << ", " << c << ") = " << result << "\n";
    }

    return 0;
}