#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int point = 2;
    for (int i = 0; i < n; i++)
    {
        point += point - 1;
    }
    cout << point * point;

    return 0;
}