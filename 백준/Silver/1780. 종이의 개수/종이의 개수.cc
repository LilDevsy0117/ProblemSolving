#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;


vector<vector<int>> v;
int zero = 0;
int minus_one = 0;
int one = 0;
void go(int a, int b, int c)
{
    if(c == 0) return;
    for(int i = a; i<a+c; i++)
    {
        for(int j = b; j<b+c; j++)
        {
            if(v[i][j] != v[a][b]){
                go(a,b,c/3);
                go(a,b+c/3,c/3);
                go(a,b+c/3*2,c/3);
                go(a+c/3,b,c/3);
                go(a+c/3,b+c/3,c/3);
                go(a+c/3,b+c/3*2,c/3);
                go(a+c/3*2,b,c/3);
                go(a+c/3*2,b+c/3,c/3);
                go(a+c/3*2,b+c/3*2,c/3);
                return;
            }
        }
    }
    
    if(v[a][b] == -1) minus_one++;
    else if(v[a][b] == 0) zero++;
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
    // cout<<"\n\n";
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<n; j++)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<"\n";
    // }
    go(0,0,n);

    cout<<minus_one<<"\n"<<zero<<"\n"<<one;



    
    return 0;
}