#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int a = 1;
    while(a < k){
        answer += 2;
        if(answer >= numbers.size()){
            answer -= numbers.size();
        }
        
        a++;
    }

    return answer+1;
}