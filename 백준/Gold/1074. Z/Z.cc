#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
using namespace std;


int go(int n, int r, int c)
{
    if(n==1) return 0;
    int answer = 0;
    if(r < n/2)
    {
        if(c < n/2)
        {
            // 2사분면
            answer += go(n/2, r%(n/2), c%(n/2));
        }else{
            // 1사분면
            answer += go(n/2, r%(n/2), c%(n/2)) + n/2 * n/2;
        }
    }else{
        if(c < n/2)
        {
            // 3사분면
            answer += go(n/2, r%(n/2), c%(n/2)) + (n/2 * n/2)*2;
        }else{
            // 4사분면
            answer += go(n/2, r%(n/2), c%(n/2)) + (n/2 * n/2)*3;
        }
    }
    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,r,c;
    cin >>n>>r>>c;
    cout<<go(pow(2,n),r,c);


    
    return 0;
}