#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <stack>
using namespace std;

int fibon = 0;
int dpn = 0;

int fibo(int n)
{

    if (n == 1 || n == 2)
    {
        fibon++;
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> fibov;
    fibov.push_back(1);
    fibov.push_back(1);
    fibo(n);
    for (int i = 2; i < n; i++)
    {
        dpn++;
        fibov.push_back(fibov[i - 1] + fibov[i - 2]);
    }

    cout << fibon << " " << dpn;

    return 0;
}