#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

vector<vector<char>> v;

void drawstar(int a, int b, int n)
{
    if (n == 3)
    {
        v[a][b] = '*';
        v[a + 1][b - 1] = v[a + 1][b + 1] = '*';
        v[a + 2][b - 2] = v[a + 2][b - 1] = v[a + 2][b] = v[a + 2][b + 1] = v[a + 2][b + 2] = '*';
        return;
    }

    drawstar(a, b, n / 2);
    drawstar(a + n / 2, b - n / 2, n / 2);
    drawstar(a + n / 2, b + n / 2, n / 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<char>> temp(n, vector<char>(2 * n - 1, ' '));

    v = temp;

    drawstar(0, n - 1, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}