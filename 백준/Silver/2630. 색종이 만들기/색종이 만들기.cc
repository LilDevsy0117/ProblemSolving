#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

vector<vector<int>> v;
int zero = 0;
int one = 0;
void go(int a, int b, int c)
{
    if(c == 0) return;
    for(int i = a; i<a+c; i++)
    {
        for(int j = b; j<b+c; j++)
        {
            if(v[i][j] != v[a][b]){
                go(a,b,c/2);
                go(a,b+c/2,c/2);
                go(a+c/2,b,c/2);
                go(a+c/2,b+c/2,c/2);
                return;
            }
        }
    }
    
    if(v[a][b] == 0) zero++;
    else one++;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<vector<int>> temp(n, vector<int>(n));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>temp[i][j];
        }
    }
    v = temp;
    go(0,0,n);

    cout<<zero<<"\n"<<one;
    
    return 0;
}