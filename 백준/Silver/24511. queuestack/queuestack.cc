#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n;
    vector<int> qs;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        qs.push_back(x);
    }
    deque<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!qs[i])
            v.push_back(x);
    }
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_front(x);
        cout << v.back() << " ";
        v.pop_back();
    }

    return 0;
}