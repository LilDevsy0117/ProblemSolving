#include <string>
#include <vector>

using namespace std;

int cnt(int a){
    int result = 0;
    for(int i = 1; i<=a; i++){
        if(a % i == 0){
            result += 1;
        }
    }
    return result;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i =left; i<=right; i++){
        if(cnt(i) % 2 == 0){
            answer += i;
        }else{
            answer -= i;
        }
    }
    return answer;
}