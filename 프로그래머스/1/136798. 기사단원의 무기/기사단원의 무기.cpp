#include <string>
#include <vector>
#include <cmath>
using namespace std;

int cnt_divisor(int n){
    int answer = 0;
    for(int i = 1; i<sqrt(n); i++){
        if(n%i == 0){
            answer += 2;
        }
    }
    if(sqrt(n) == floor(sqrt(n))){
        answer++;
    }
    return answer;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    int c;
    for(int i = 1; i<=number; i++){
        c = cnt_divisor(i);
        if(c > limit){
            answer += power;
        }else{
            answer += c;
        }
    }
    return answer;
}