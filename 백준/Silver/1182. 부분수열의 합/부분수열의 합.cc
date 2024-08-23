#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

int n,s;
vector<bool> check;
vector<int> v;
int answer = 0;
void go(int z, int sum)
{
    if(z==n)
    {
        if(sum == s) answer++;
        return;
    }
    go(z+1, sum+v[z]);
    go(z+1, sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>s;
    for(int i = 0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i = 0; i<n; i++)
    {
        check.push_back(false);
    }

    go(0,0);
    if(s == 0) answer--;
    cout<<answer;

    return 0;
}