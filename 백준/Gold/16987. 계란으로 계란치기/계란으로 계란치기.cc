#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
vector<vector<int>> v(8, vector<int>(2));
int answer = 0;
void go(int z)
{
    if(z==n)
    {
        int temp = 0;
        for(int i = 0; i<n; i++)
        {
            if(v[i][0] <= 0)
            {
                temp++;
            }
        }
        if(answer < temp) answer =temp;
        return;
    }
    if(v[z][0] <=0)
    {
        go(z+1);
        return;
    }
    bool check = false;
    for(int i = 0; i<n; i++)
    {
        
        if(i!=z && v[i][0] > 0)
        {
            check = true;
            v[z][0] -= v[i][1];    
            v[i][0] -= v[z][1];
            go(z+1);
            v[z][0] += v[i][1];
            v[i][0] += v[z][1]; 
        }
        
    } 
    if(check ==false)
    {
        go(z+1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>v[i][0]>>v[i][1];
    }
    go(0);
    cout<<answer;


    return 0;
}