#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

vector<bool> check(2000001);
vector<bool> check2(2000001);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
        check[v[i]] = true;
    }
    cin>>x;
    int answer = 0;
    for(int i = 0; i<n-1; i++)
    {
        if(check[x - v[i]] && !check2[x-v[i]] && x-v[i] != v[i])
        {
            answer++;
        }
        check2[v[i]] = true;
    }
    cout<<answer;

    return 0;
}