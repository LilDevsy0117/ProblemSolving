#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    int answer = 1;
    int j = 2;
    for(int i = balls; i>share; i--){
        answer *= i;
        while(answer % j == 0 && j <=balls-share){
            answer/=j;
            j++;
        }
    }
    
    return answer;
}