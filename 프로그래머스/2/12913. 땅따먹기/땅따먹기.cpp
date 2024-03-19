#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    vector<int> dp(5);
    int a,b,c,d;
    for(int i = 0; i<land.size(); i++){
        a = land[i][0] + max(max(dp[1], dp[2]), dp[3]);
        b = land[i][1] + max(max(dp[0], dp[2]), dp[3]);
        c = land[i][2] + max(max(dp[1], dp[0]), dp[3]);
        d = land[i][3] + max(max(dp[1], dp[2]), dp[0]);
        dp[0] = a;
        dp[1] = b;
        dp[2] = c;
        dp[3] = d;
    }
    answer = *max_element(dp.begin(), dp.end());

    return answer;
}