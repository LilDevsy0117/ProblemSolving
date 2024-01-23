#include <string>
#include <vector>

using namespace std;

long long solution(int num1) {
    long long answer = 0;
    long long num = num1;
    while(num != 1){
        if(answer >= 500)
        {
            answer = -1;
            break;
        }        
        answer++;
        if(num % 2 == 0){
            num /= 2;
        }else{
            num = num*3 +1;
        }
    }
    return answer;
}