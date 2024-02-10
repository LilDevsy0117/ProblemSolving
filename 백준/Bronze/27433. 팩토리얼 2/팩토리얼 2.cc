#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
#include <deque>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

long long fibo(long long n)
{
    if (n == 0)
        return 1;
    return n * fibo(n - 1);
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    cout << fibo(n);

    return 0;
}