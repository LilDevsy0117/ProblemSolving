#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i =1;i<=n; i++){
        answer++;
        # 3으로 나누어지거나, 3이 포함되거나 한 경우 제외
        while(answer % 3 == 0 || to_string(answer).find("3") != string::npos){
            answer++;
        }
    }
    return answer;
}
