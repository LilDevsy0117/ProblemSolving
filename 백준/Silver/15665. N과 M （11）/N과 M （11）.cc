#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n,s;
vector<bool> check;
vector<int> v;
vector<int> answer(8);
void go(int z)
{
    if(z == s)
    {   
        for(int i = 0; i<s; i++)
        {
            cout<<answer[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int i = 0; i<n; i++)
    {
        
        if(i>0 &&v[i] == v[i-1]) continue;
        answer[z] = v[i];
        
        go(z+1);
            
    }
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
    sort(v.begin(), v.end());
    
    go(0);

    return 0;
}