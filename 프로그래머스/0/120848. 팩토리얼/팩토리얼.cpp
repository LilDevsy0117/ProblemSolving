#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int s = 1;
    while(1){
        answer++;
        s *= answer;
        if(s>n)break;
    }
    answer--;
    return answer;
}