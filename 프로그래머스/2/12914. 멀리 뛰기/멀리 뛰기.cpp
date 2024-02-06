#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> v(2001, vector<int>(2001,0));

int comb(int a, int b){
    int answer =1;
    if(a == b) return 1;
    if(b == 0) return 1;
    if(v[a][b] == 0){
        v[a][b] = (comb(a-1,b-1)%1234567 + comb(a-1,b)%1234567)%1234567;
    }
    return v[a][b];
}

long long solution(int n) {
    long long answer = 0;
    int two = 0;
    while(n>=two){
        answer += comb(n,two);
        two++;
        n--;
    }
    answer %= 1234567;
   
    return answer;
}