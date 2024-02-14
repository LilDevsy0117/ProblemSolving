#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int n = 9;

vector<vector<int>> vv(10, vector<int>(10, 0));
vector<vector<bool>> sudoku_row(10, vector<bool>(10, false));
vector<vector<bool>> sudoku_col(10, vector<bool>(10, false));
vector<vector<bool>> sudoku_box(10, vector<bool>(10, false));

bool sudoku(int z)
{
    if (z == 81)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << vv[i][j] << " ";
            }
            cout << "\n";
        }
        return true;
    }

    int x = z / n;
    int y = z % n;

    if (vv[x][y] != 0)
    {
        return sudoku(z + 1);
    }
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            if (!sudoku_row[x][i] && !sudoku_col[y][i] && !sudoku_box[(int)(x / 3) * 3 + (int)y / 3][i])
            {
                sudoku_row[x][i] = true;
                sudoku_col[y][i] = true;
                sudoku_box[(int)(x / 3) * 3 + (int)y / 3][i] = true;
                vv[x][y] = i;
                if (sudoku(z + 1))
                {
                    return true;
                }
                vv[x][y] = 0;
                sudoku_row[x][i] = false;
                sudoku_col[y][i] = false;
                sudoku_box[(int)(x / 3) * 3 + (int)y / 3][i] = false;
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> x;
            vv[i][j] = x;
            if (x != 0)
            {
                sudoku_row[i][x] = true;
                sudoku_col[j][x] = true;
                sudoku_box[(int)(i / 3) * 3 + (int)j / 3][x] = true;
            }
        }
    }

    sudoku(0);

    return 0;
}