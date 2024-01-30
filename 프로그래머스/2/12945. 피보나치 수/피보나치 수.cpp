#include <string>
#include <vector>

using namespace std;

vector<int> v(100001);

int fibo(int n){
    if(n == 0){
        return 0;
    }else if(n<=2){
        return 1;
    }
    if(v[n]) return v[n];
    v[n-1] = fibo(n-1)%1234567;
    v[n-2] = fibo(n-2)%1234567;
    return (v[n-1] + v[n-2])%1234567;
}

int solution(int n) {
    int answer = 0;
    // for(int i = 2; i<=n; i++){
    //     answer = answer 
    // }
    answer = fibo(n)%1234567;
    return answer;
}