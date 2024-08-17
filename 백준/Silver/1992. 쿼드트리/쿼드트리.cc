#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;

vector<vector<int>> v;
void go(int a, int b, int c)
{
    if(c == 0) return;
    
    for(int i = a; i<a+c; i++)
    {
        for(int j = b; j<b+c; j++)
        {
            if(v[i][j] != v[a][b]){
                cout<<"(";
                go(a,b,c/2);
                go(a,b+c/2,c/2);
                go(a+c/2,b,c/2);
                go(a+c/2,b+c/2,c/2);
                cout<<")";
                return;
            }
        }
    }
    if(v[a][b] == 0) cout<<0;
    else cout<<1;
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
        string s;
        cin>>s;
        for(int j = 0; j<n; j++)
        {
            temp[i][j] = s[j] - '0';
        }
    }
    v = temp;
    go(0,0,n);

    
    
    return 0;
}